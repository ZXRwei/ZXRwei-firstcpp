#pragma once

#include <string>
#include <iostream>
#include <vector>
#include <sstream>

//全局变量:函数间接返回值
extern std::string Cache_DataBase_Back;

///@brief 缓存数据库函数
///@param command 命令名
///@param key 标识
///@param content 内容
void Cache_DataBase(std::string command);