#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

///@brief 缓存数据库函数
///@param command 命令名
///@param key 标识
///@param content 内容
///@return True and False
char Cache_DataBase(std::string command,std::string key,std::string content);