#pragma once
//头文件内不可进行定义变量、函数、类等操作，只能进行声明操作

//枚举空间
enum WareHouse
{
	Number1,
	Number2,
	Number3,
	Number4,
	Number5,
};
enum class TEXT {
	T1,
	T2,
	T3,
	T4,
};
enum class LogLevel {
	DEBUG,	//调试
	INFO,	//正常信息
	ERROR,	//错误
	FATAL,	//崩溃
};

//定义base16编码表
static const std::string base16_enc_tab = "0123456789ABCDEF";

//将test_number加10并返回
bool test(int test_number);

//将a和b的值相加并返回
int test_ab(int a, int b);

//将a和b的值乘以2
void test_pointer_ab(int* a, int* b);

//将a和b的值乘以3
void test_quoted_ab(int& a, int& b);

//将a、b和c的值相乘并返回
int test_abc(int a, int b, int c);

//数组中0位和4位不相等时，将1位赋值为10并返回；
//数组中0位和4位相等但0位和3位不相等时，将2位赋值为20并返回；
//数组中0位和4位相等且0位和3位相等时，将3位赋值为30并返回；
std::int32_t test_array(std::int32_t(&array)[5])
{
	if (array[0] != array[4])
	{
		array[1] = 10;
		return array[1];
	}
	else if (array[0] != array[3])
	{
		array[2] = 20;
		return array[2];
	}
	else {
		array[3] = 30;
		return array[3];
	}

}
//将输入的三个整数进行比较:
// 若a和b相等，则Test_vector[0]加1；
// 若b和c相等，则Test_vector[1]加2；
// 若a和c相等，则Test_vector[2]加3；否则结束循环。
// 每次循环后打印Test_vector的内容。
std::vector<int> Test_vector_array(std::vector<int> Test_vector)
{
	int TF = 1;
	while (TF == 1)
	{
		int a, b, c;
		std::cout << "a b c>>";
		std::cin >> a >> b >> c;
		if (a == b) {
			Test_vector[0] += 1;
		}
		else if (b == c) {
			Test_vector[1] += 2;
		}
		else if (a == c) {
			Test_vector[2] += 3;
		}
		else {
			TF = 0;
		}
		for (int i : Test_vector)
		{
			std::cout << i << " ";
		}
		std::cout << std::endl;
	}
	return Test_vector;
}

