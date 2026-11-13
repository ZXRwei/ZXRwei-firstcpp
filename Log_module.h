#pragma once

#include <iostream>
#include <string>
#include "GetNow.h"

static std::ostream logstr(std::cout.rdbuf());                                                          //设置cout的buf以支持logstr进行输出流

void SetLogBuf(std::streambuf* buf)
{
    logstr.set_rdbuf(buf);                                                                              //设置logstr进行控制台输出
}
void LogWrite(std::string level, std::string log, std::string file, int line)                           //设置日志级别,内容,文件,行号
{
    logstr << GetNow() << " " << level << " " << log << " " << file << ":" << line << std::endl;        //拼接日志并打印且默认控制台
}

#define LOGDEBUG(s) LogWrite("debug",s,__FILE__,__LINE__)                                               //定义宏替换函数