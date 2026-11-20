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

class T_Class_Construcor {
public:
	T_Class_Construcor()
		:number_1{ 2 }	//在函数前进行类成员变量初始化,会忽略默认成员初始化器所赋值
	{
		number_1 += 1;	//在构造函数中赋值,增大开销
		std::cout << "T_Class_Construcor" << number_1 << std::endl;
	}
	~T_Class_Construcor() {
		std::cout << "~T_Class_Construcor" << Number_S << std::endl;
	}
private:
	int number_1{ 1 };	//默认成员初始化器
	static int Number_S;
};
int T_Class_Construcor::Number_S = { 10 };
//T_Class_Construcor::T_Class_C1() {}