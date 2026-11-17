#pragma once

#include <string>
#include <vector>
#include <iostream>

//面向对象:模拟游戏
class T_Class {
public:
	std::string Name;
	int Blood{ 0 };
	int Attack{ 0 };
	int Defense{ 0 };
	int Real_Defense{ 0 };

};

char T_Class_And_Defense(T_Class Name) {
	std::cout << &Name.Defense << std::endl;
	std::cout << &Name.Real_Defense << std::endl;
	return Name.Real_Defense;
}

void T_Class_Attack(T_Class Attack_side,T_Class Defense_side){
	int Initial_Blood = Defense_side.Blood;
	int Initial_Attack = Attack_side.Attack;

	if (Defense_side.Real_Defense > Attack_side.Attack) {
		Defense_side.Real_Defense -= Attack_side.Attack;
		if (Defense_side.Real_Defense < 0) { Defense_side.Real_Defense = 0; }
		std::cout << Defense_side.Name << " Defense!" << std::endl;
	}
	else if (Defense_side.Real_Defense <= Attack_side.Attack) {

		T_Class_And_Defense(Defense_side);

		Initial_Attack -= Defense_side.Real_Defense;
		std::cout << Defense_side.Name << "(Blood):" << Defense_side.Blood;
		Defense_side.Real_Defense = 0;
		Defense_side.Blood -= Initial_Attack;
		std::cout << " -> " << Defense_side.Blood << std::endl;
	}


}

void T_Class_Defense(T_Class Name) {

	T_Class_And_Defense(Name);

	std::cout << Name.Name << "(Defense):" << Name.Real_Defense;
	Name.Real_Defense = Name.Real_Defense + Name.Defense;
	std::cout << " -> " << Name.Real_Defense << std::endl;
	T_Class_And_Defense(Name);
}