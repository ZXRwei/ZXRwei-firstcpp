#pragma once

#include <string>
#include <vector>
#include <iostream>

//面向对象
class T_Class {
public:
	std::string Name;
	int A{ 0 };
	int B{ 0 };
	char Number{ 0 };

	//内联函数
	void T_Class_W(int x) {
		x += 1;
		std::cout << x << std::endl;
	}
	void T_Class_A(T_Class Name) {
		std::cout << (long long)this << std::endl;
	}
	//外联函数声明
	void T_Class_Q(int x);	

//静态成员变量声明
public:					//函数外可访问静态成员变量
	static int T_pc;	
private:				//函数外不可访问静态成员变量
	static int T_pe;

//静态成员函数声明
public:
	static void T_Class_Static_1(int TCS) {
		TCS += 1;
		std::cout << TCS << std::endl;
	}
	static void T_Class_Static_2() {
		//静态成员函数可以访问私有成员变量和函数
		T_pe += 1;
	}
};

//静态变量定义
int T_Class::T_pc = { 101 };
int T_Class::T_pe = { 102 };

//外联函数定义
void T_Class::T_Class_Q(int x) {
	x -= 1;
	std::cout << x << std::endl;
}