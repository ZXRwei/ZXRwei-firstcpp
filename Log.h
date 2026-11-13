#pragma once

#include <fstream>
#include <sstream>
#include <iostream>

//支持LOGDEBUG,LOGINFO,LOGERROR,LOGFATAL四种日志级别
//默认输出日志到控制台
//LogInit(Log Type Logtype,string format,string para)

#define LOGDEBUG(debug)
#define LOGINFO(info)
#define LOGERROR(error)
#define LOGFATAL(fatal)