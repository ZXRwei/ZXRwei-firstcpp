#ifndef CACHEDB_HPP
#define CACHEDB_HPP

#include <string>
#include <vector>
#include <sstream>
#include <cstddef>

namespace cachedb {

    // ==================== 数据结构 ====================
    struct Entry {
        std::string key;    // 标识
        std::string value;  // 内容
    };

    // 全局缓存（函数内 static，所有翻译单元共享唯一实例）
    inline std::vector<Entry>& db() {
        static std::vector<Entry> data;
        return data;
    }

    // ==================== 内部工具 ====================
    inline std::string trim(const std::string& s) {
        static const char* ws = " \t\r\n";
        std::size_t b = s.find_first_not_of(ws);
        if (b == std::string::npos) return std::string();
        std::size_t e = s.find_last_not_of(ws);
        return s.substr(b, e - b + 1);
    }

    // ==================== 具体命令实现 ====================
    inline std::string add_entry(const std::string& key, const std::string& content) {
        // 错误检查优先级：先判断"什么都没输入"，再判断缺哪一项
        if (key.empty() && trim(content).empty()) return "没有输入内容";
        if (key.empty())                       return "没有输入标识";
        if (trim(content).empty())             return "没有输入内容";

        for (auto& e : db()) {
            if (e.key == key) {          // 标识已存在 → 覆盖
                e.value = content;
                return "添加成功";
            }
        }
        Entry en;
        en.key = key;
        en.value = content;
        db().push_back(en);
        return "添加成功";
    }

    inline std::string get_entry(const std::string& key) {
        if (key.empty()) return "没有输入标识";
        for (const auto& e : db()) {
            if (e.key == key) return e.value;
        }
        return "未找到该标识";
    }

    inline std::string del_entry(const std::string& key) {
        if (key.empty()) return "没有输入标识";
        auto& v = db();
        for (auto it = v.begin(); it != v.end(); ++it) {
            if (it->key == key) {
                v.erase(it);
                return "删除成功";
            }
        }
        return "未找到该标识";
    }

    inline std::string list_entries() {
        const auto& v = db();
        if (v.empty()) return "缓存为空";
        std::string out;
        for (std::size_t i = 0; i < v.size(); ++i) {
            out += "[" + std::to_string(i) + "] " + v[i].key + " : " + v[i].value;
            if (i + 1 < v.size()) out += "\n";
        }
        return out;
    }
    // 可选：清空缓存
    inline void clear() { db().clear(); }   

    ///@brief 缓存数据库函数
    ///@param command 命令名
    ///@param key 标识
    ///@param content 内容
    ///@return string
    inline std::string cache_db_line(const std::string& command,
        const std::string& key = "",
        const std::string& content = "") {
        const std::string cmd = trim(command);
        const std::string k = trim(key);

        if (cmd.empty())   return "没有输入命令";
        if (cmd == "添加" || cmd == "add") return add_entry(k, content);
        if (cmd == "查看" || cmd == "get") return get_entry(k);
        if (cmd == "删除" || cmd == "del") return del_entry(k);
        if (cmd == "索引" || cmd == "list") return list_entries();
        return "未知命令";
    }
    /**/
    // ==================== 便捷版本：整行输入自动解析 ====================
    // 示例："添加 你 你好 世界"  -> 命令="添加"  标识="你"  内容="你好 世界"
    inline std::string cache_db_line(const std::string& line) {
        std::istringstream iss(line);
        std::string cmd, key;
        if (!(iss >> cmd)) return "没有输入命令";
        if (!(iss >> key)) key.clear();       // 只输入命令时 key 为空

        std::string content;
        std::getline(iss, content);           // 剩余部分全部作为内容（允许空格）
        content = trim(content);

        return cache_db_line(cmd, key, content);
    }
    
} // namespace cachedb

#endif // CACHEDB_HPP