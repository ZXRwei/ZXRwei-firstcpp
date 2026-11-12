#pragma once

#include <iostream>
#include <string>
#include "GetNow.h"

static std::ostream logstr(std::cout.rdbuf());

void SetLogBuf(std::streambuf* buf)
{
    logstr.set_rdbuf(buf);
}
void LogWrite(std::string level, std::string log, std::string file, int line)
{
    logstr << GetNow() << " " << level << " " << log << " " << file << ":" << line << std::endl;
}

#define LOGDEBUG(s) LogWrite("debug",s,__FILE__,__LINE__)