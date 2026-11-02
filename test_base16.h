#pragma once

#include <vector>;
#include <string>;
#include <iostream>;

///////////////////////////////////////////
///base16编码
///@param data 待编码数据
///@return 编码后的字符串
std::string Base16Encode(const std::vector<unsigned char>& data);

///base16解码
///@param str 待解码字符串
///@return 解码后的数据
std::vector<unsigned char> Base16Decode(const std::string& str);