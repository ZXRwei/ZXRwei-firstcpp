#pragma once

#include <fstream>
#include <sstream>
#include <iostream>
#include <string>
#include "GetNow.h"

std::string Log_Level(int level) {
	if (level == 1) {
		return "debug";
	}
	else if (level == 2) {
		return "info";
	}
	else if (level == 3) {
		return "error";
	}
	else if (level == 4) {
		return "fatal";
	}
	else {
		return "";
	}
}

std::string Export(int method) {
	if (method == 0) {
		return "Console";
	}
	else if (method == 1) {
		return "File";
	}
	else {
		return "";
	}
}

std::ofstream Log_File("log.txt", std::ios::app);

void Log_Write(std::string log, int level = 0,int method = 0, std::string file = "", int line = 0) {
	std::string Level = Log_Level(level);
	std::string Method = Export(method);
	if (Method == "Console") {
		std::cout << GetNow() << " " << Level << " " << log << " " << file << ":" << line << std::endl;
	}
	else if (Method == "File") {
		
		Log_File.open("log.txt", std::ios::app);
		Log_File.clear();
		Log_File << GetNow() << " " << Level << " " << log << " " << file << ":" << line << "\n" << std::flush;

		Log_File.close();
	}
	else {
	
	}
	

	

}


//@brief 日志报告
//@param log 内容
//@param leven 级别(1~4)
//@param method 路径(0~1)  默认为0
#define LOG_EXPORT(log,level,method) Log_Write(log,level,method,__FILE__,__LINE__)

