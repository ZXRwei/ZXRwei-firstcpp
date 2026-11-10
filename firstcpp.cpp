// firstcpp.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

//引用外部文件
#include <iostream>	//输入与输出
#include <bitset>	//输出二进制
#include <string>	//字符串类型
#include <vector>	//vector数组
#include <algorithm>//算法库-排序
#include <sstream>	//字符串流

//本地头文件
//#include "Test_First.h"
//#include "test_base16.h"
//#include "Cache_DataBase.h"

//命名空间 不可放入头文件中
using namespace std;

//入口函数传递参数
//传递参数：TEXT 25 CPP 3.14

//int main(int argc,char * argv[], char* env[])
int main()
{
//枚举
/*
	{
		//C++11前的枚举值可以直接赋值给变量;
		auto a{ Number1 };
		cout << a << endl;
		//设置级别影响显示范围;
		TEXT X{ TEXT::T1 };
		TEXT Y{ TEXT::T3 };
		//若需打印enum class的枚举值则需要强制转化成数值类型;
		int Q = static_cast<int>(Y);
		if (X <= Y) {
			cout << "X <= Y " << endl;
		}
		else {
			cout << "X > Y" << endl;
		}
		cout << Q << endl;
	}
*/

//打印数值
/*
	cout << "Hello World!\n";
	int a{ 10 };
	cout<< "变量a的值为"
		<< a
		<<endl;
	cout<< "变量a的内存地址为"
		<< &a
		<< endl;
	cout<< "变量a内存字节为"
		<< sizeof(a)
		<< endl;
*/

//算数
/*
	{
		float a1{ 10 };
		int a2{ 20 };
		float a3;

		a3 = a1 / a2;

		cout << "a3=" << a3 << endl;

		auto a4{ 0.1 };//a4为double类型运行时变量；
		const auto a5{ a4 };//a5为double类型运行时常量；
		cout << "a5常量的值为" << a5 << endl;

		auto ex{ 1 };
		cout << "变量ex为int类型的内存字节为" << sizeof(ex) << endl;
		auto dx{ (long long)ex };
		cout << "变量ex转换为long long类型dx后的内存字节为" << sizeof(dx) << endl;
	}
*/

//RGB与YUV互换
/*
	auto R{ 0. };
	auto G{ 0. };
	auto B{ 0. };
	auto Y{ 0. };
	auto U{ 0. };
	auto V{ 0. };
	{
		cout << "将RGB转换为YUV：\n";
		cout << "R=";
		cin >> R;
		cout << "G=";
		cin >> G;
		cout << "B=";
		cin >> B;
		Y = 0.299 * R + 0.587 * G + 0.114 * B;
		U = -0.14713 * R - 0.28886 * G + 0.436 * B + 128;
		V = 0.615 * R - 0.51498 * G - 0.10001 * B + 128;
		cout<<"结果：\n"
			<<"Y=" << Y << endl
			<<"G=" << U << endl
			<<"B=" << V << endl;
	}

	{
		cout << "将YUV转换为RGB：\n";
		cout << "Y=";
		cin >> Y;
		cout << "U=";
		cin >> U;
		cout << "V=";
		cin >> V;
		R = Y + 1.13983 * (V - 128);
		if (R >= 255) {
			R = 255;
		}
		else if (R <= 0) {
			R = 0;
		}
		else {
			R = (int)R;
		}

		G = Y - 0.39465 * (U - 128) - 0.58060 * (V - 128);
		if (G >= 255) {
			G = 255;
		}
		else if (G <= 0) {
			G = 0;
		}
		else {
			G = (int)G;
		}

		B = Y + 2.03211 * (U - 128);
		if (B >= 255) {
			B = 255;
		}
		else if (B <= 0) {
			B = 0;
		}
		else {
			B = (int)B;
		}

		cout<<"结果:\n"
			<<"R=" << R << endl
			<<"G=" << G << endl
			<<"B=" << B << endl;
	}
*/

//逻辑运算
/*
	{
	//定义变量a和b为char类型并赋值，0b代表其值为二进制形式；
	char a = 0b10000001;
	char b = 0b00000001;
	//将变量a和b以八位二进制形式打印出来；
	cout << "a=\t" << bitset<8>(a) << endl;
	cout << "b=\t" << bitset<8>(b) << endl;
	//cout << bitset<字节位>(变量名) << endl；

	//逐位非
		cout << "~a=\t" << bitset<8>(~a) << endl;
		cout << "~b=\t" << bitset<8>(~b) << endl;

	//逐位与
		cout << "a&b=\t" << bitset<8>(a & b) << endl;
		cout << "b&a=\t" << bitset<8>(b & a) << endl;

	//逐位或
		cout << "a|b=\t" << bitset<8>(a | b) << endl;
		cout << "b|a=\t" << bitset<8>(b | a) << endl;
	}
*/

//不为0就是ture
/*
	{
	int t{ 1 };
	int f{ 0 };
	//逻辑非
		if (not t) {
			cout << "not t" << endl;
		}
		else {
			cout << "not t else" << endl;
		}

	//逻辑或
		if (t or f) {
			cout << "t or f" << endl;
		}
		else{
			cout << "t or f else" << endl;
		}

	//逻辑与
		if (t and f) {
			cout << "t and f" << endl;
		}
			else {
			cout << "t and f else" << endl;
		}
	}
*/

//字符串的输入与输出
/*
	{
	string str1{ "Hello" };
	cout << str1 << endl;
	str1 = "World";
	cout << str1 << endl;

	cout << "str1的长度为：" << size(str1) << endl;
	cout << "str1的长度为：" << str1.size() << endl;
	}
*/

//截断字符串
/*
	{
		string str1{ "0123456789" };
		cout << str1.substr(2) << endl;
		cout << str1.substr(1, 6) << endl;
	}
*/

//空串判断
/*
	{
		string strz;
		if (strz.empty()) {
			cout << "strz.empty()" << endl;
		}
		if (empty(strz)) {
			cout << "empty(strz)" << endl;
		}
		if (strz.size()) {
			cout << "strz.size()" << endl;
		}
		if (size(strz)) {
			cout << "size(strz)" << endl;
		}
		string stro{ "stro" };
		if (stro == strz) {
			cout << "stro == strz" << endl;
		}
		else if (stro != strz) {
			cout << "stro != strz" << endl;
		}
	}
*/

//字符串和数字的转换
/*
	{
	//字符串转换为数字
		//int类型
		auto i = stoi( "1234" );
		cout << "i=" << i << endl;
		//double类型
		auto d = stod("123.4");
		cout << "d=" << d << endl;
		//float类型
		auto f = stof("12.34f");
		cout << "f=" << f << endl;
		//lang lang类型
		auto ll = stoll("1234");
		cout << "ll=" << ll << endl;
	 }

	{
	//数字转换为字符串
		auto tostr = to_string(001001);
		cout << "tostr=" << tostr << endl;
		cout << to_string(123.1233335) << endl;
	}
*/

//字符串的拼接
/*
	{
		string Q;
		string A{ "Hello" };
		string B{ "World" };
		Q = A + "," + B + "!";
		cout << Q << endl;
		string W;
		string C{ "我有" };
		int D{ 100 };
		string E{ "苹果" };
		W = C + to_string(D) +"个" + E;
		cout << W << endl;
	}
*/

//字符串的查找和替换
/*
	{
		//定义被查找替换的字符串;
		string Find("The [name] place");
		//定义需要查找的字符串;
		string Key("[name]");
		//定义需要替换的字符串;
		string Inkey;
		cin >> Inkey;
		//定义替换后的字符串;
		string YFind;
		//在字符串内查找所需要的内容;
		//若存在内容，其返回的值为被替换字符串的位置;
		auto pos = Find.find(Key);
		//判断其返回的值中有无需要的内容;
		if (pos == string::npos) {
			cout << "[name] NOT FAND" << endl;
		}
		else if (pos != string::npos) {
			//备份替换前的字符串;
			string XFind = Find;
			//替换内容：开始替换的字符起始位置，替换的字符长度，替换的字符内容;
			auto YFind = Find.replace(pos, size(Key), Inkey);
			cout << XFind << endl;
			cout << YFind << endl;
		}
	}
*/

//入口函数
/*
	{
		//不传递时argc默认为1;
		cout << "argc =" << argc << endl;
		//执行程序全局路径;
		cout << "argv[0] =" << argv[0] << endl;
		//打印对应的传递参数;
		if (argc > 1) {
			cout << argv[1] << endl;
		}
		if (argc > 2) {
			cout << argv[2] << endl;
		}
		if (argc > 3) {
			cout << argv[3] << endl;
		}
		if (argc > 4) {
			cout << argv[4] << endl;
		}
		//打印环境变量所对应的参数;
		cout << env[0] << endl;
	}
*/

//switch条件判断
/*
	{
		int A{ 0 };
		cout << "A=";
		cin >> A;
		//对比case直接跳转到相应代码块，若无break则延续执行直到结束
		//仅有跳转功能，运行经过不执行
		//break执行终止当前所在的switch进程
		switch (A)
		{
			case 0 :
				cout << "0\n";
				break;
			case 1 :
				cout << "1\n";
				break;
			case 2:
				cout << "2\n";
				break;
			case 3:
				cout << "3\n";
				break;
			default:
				cout << "ERROE\n";
		}

		//switch应用于枚举;
		cout << "B=";
		int B{ 0 };
		cin >> B;
		switch (B)
		{
		case Number1:
			cout << "Number1" << endl;
			break;
		case Number2:
			cout << "Number2" << endl;
			break;
		case Number3:
			cout << "Number3" << endl;
			break;
		case Number4:
			cout << "Number4" << endl;
			break;
		case Number5:
			cout << "Number5" << endl;
			break;
		default:
			cout << "default" << endl;
			break;
		}
	}
*/

//模拟日志模块
/*
	//需求：用户自行控制日志显示的最高级别；
	{
		//设置默认显示日志级别为DEBUG;
		auto LogLevel = LogLevel::DEBUG;
		//判断用户是否传递参数;
		if (argc > 1) {
			//若用户传递参数，将其导入字符串;
			string Levelstr = argv[1];
			//判断字符串与哪个级别相对应;
			//对应级别后将相应等级注入字符串;
			if ("info" == Levelstr) {
				LogLevel = LogLevel::INFO;
			}
			else if ("error" == Levelstr) {
				LogLevel = LogLevel::ERROR;
			}
			else if ("fatal" == Levelstr) {
				LogLevel = LogLevel::FATAL;
			}
		}

		//测试DEBUG级别日志1;
		{
			//设置日志内容;
			auto Level = LogLevel::DEBUG;
			string context = "Test Log 1";
			//判断本日志级别是否高于字符串所对应的枚举级别;
			if (Level >= LogLevel) {
				//设置默认参数级别
				string Levelstr = "debug";
				//使用switch判断日志级别;
				//判断成功后将级别以char注入到字符串;
				switch (Level)
				{
				case LogLevel::INFO:
					Levelstr = "info";
					break;
				case LogLevel::ERROR:
					Levelstr = "error";
					break;
				case LogLevel::FATAL:
					Levelstr = "fatal";
					break;
				default:
					break;
				}
				//打印日志级别以及日志内容;
				cout << Levelstr << ":" << context << endl;
			}
		}

		//测试DEBUG级别日志2;
		{
			auto Level = LogLevel::INFO;
			string context = "Test Log 2";
			if (Level >= LogLevel) {
				string Levelstr = "debug";
				switch (Level)
				{
				case LogLevel::INFO:
					Levelstr = "info";
					break;
				case LogLevel::ERROR:
					Levelstr = "error";
					break;
				case LogLevel::FATAL:
					Levelstr = "fatal";
					break;
				default:
					break;
				}
				cout << Levelstr << ":" << context << endl;
			}
		}

		//测试DEBUG级别日志3;
		{
			auto Level = LogLevel::ERROR;
			string context = "Test Log 3";
			if (Level >= LogLevel) {
				string Levelstr = "debug";
				switch (Level)
				{
				case LogLevel::INFO:
					Levelstr = "info";
					break;
				case LogLevel::ERROR:
					Levelstr = "error";
					break;
				case LogLevel::FATAL:
					Levelstr = "fatal";
					break;
				default:
					break;
				}
				cout << Levelstr << ":" << context << endl;
			}
		}

		//测试DEBUG级别日志4;
		{
			auto Level = LogLevel::FATAL;
			string context = "Test Log 4";
			if (Level >= LogLevel) {
				string Levelstr = "debug";
				switch (Level)
				{
				case LogLevel::INFO:
					Levelstr = "info";
					break;
				case LogLevel::ERROR:
					Levelstr = "error";
					break;
				case LogLevel::FATAL:
					Levelstr = "fatal";
					break;
				default:
					break;
				}
				cout << Levelstr << ":" << context << endl;
			}
		}

	}
*/

//循环
/*
	{
		//设置for循环、定义变量a、设立判断条件、设置迭代;
		for (int a = 0;a < 30;a++)
		{
			//设置判断:如果a除2的余数等于1;
			if (a % 2 == 1)
				//直接进入迭代，不执行下面的代码块:去除a所包含的奇数;
				continue;
			//打印a的值;
			cout << "a = " << a << endl;
			//设置判断:如果a大于等于20;
			if (a >= 20)
				//终止本循环;
				break;
		}
		//循环结束打印提示;
		cout << "End" << endl;

		//嵌套循环
		for (int a = 0;a <= 50;a++)
		{
			if (a % 2 == 1)
				continue;
			for (a;a % 4 != 2;a = a)
			{
				cout << "a = " << a << endl;
				break;
			}
		}

		//无限循环
		int a{ 0 };
		for (;;)
		{
			if (a > 10) break;
			cout << "a = " << a << endl;
			a++;
		}
	}
*/

//while循环
/*
	{
		//定义循环判断标准
		auto a{ 0 };
		while (a < 10)
		{
			a = a + 1;
			cout << "a = " << a << endl;
		}

	}
*/

//system执行系统命令
/*
	{
		{
		//获取当前文件地址
		system("cd");

		//定义目标:获取文件目录
		string cmd{ "dir" };
		//将cmd的字符串格式转变为Win系统可读取的const char*格式
		//执行dir命令:获取当前目录下的文件
		system(cmd.c_str());
		}

		string cmd;
		//接收用户输入的命令
		cout << ">>";
		//将命令存入cmd中
		cin >> cmd;
		//cin输入变量，若输入存在空格截断，空格后的内容无法直接读取，需要访问缓冲区
		//转移指针将cin的内容指向空格后的缓冲区内容
		cout << "in_avail:" << cin.rdbuf()->in_avail() << endl;
		//判断缓冲区是否有内容
		if (cin.rdbuf()->in_avail() > 1)
		{
			//进入判断代表缓冲区有内容
			//定义新变量tmp用于重新获取命令
			string tmp;
			//将cin中的缓冲区内容输入变量tmp中
			cin >> tmp;
			//组合cmd的内容
			cmd = cmd + " " + tmp;
		}
		//打印cmd的内容
		cout << "cmd:" << cmd << endl;

		//执行系统命令，使控制台暂停运行
		system("pause");


		//定义循环退出命令
		bool is_exit(false);
		//使用while循环使其保持运行
		while (!is_exit)
		{
			//定义用户输入的命令的变量名
			string cmd;
			//定义system执行命令的变量名
			string execcmd;
			//打印提示输入文字
			cout << "xshell>>";
			//将用户输入的命令存储到变量cmd中
			cin >> cmd;
			//定义判断句式:如果用户输入的是ls命令
			if (cmd == "ls")
			{
				//直接定义执行命令为dir
				execcmd = "dir";
				//定义新变量arg用于获取可能的缓冲区命令
				string arg;
				//判断用户输入的命令是否有未显示的空格后的部分
				if (cin.rdbuf()->in_avail() > 1)
				{
					//进入判断代表缓冲区有内容
					//将cin中的缓冲区内容输入变量tmp中
					cin >> arg;
					//组合cmd的内容
					execcmd = execcmd + " " + arg;
				}
				//执行system命令
				system(execcmd.c_str());
			}
			//定义结束while命令句：exit、end、quit
			else if (cmd == "exit" || cmd == "end" || cmd == "quit")
			{
				//如果用户输入指定的命令句，将is_exit的布尔值更改为true，使while判断为false，从而结束while循环
				is_exit = true;
				//结束对应的if循环
				break;
			}
			//定义延展模块，防止用户输入无反馈、无意义或导致程序出错
			else
			{
				//提示用户命令错误
				cout << "不支持" << cmd << "命令!" << endl;
			}
		}
	}
*/

//C++数组
/*
	{
		//栈区
		{
			//定义一个栈区数组，长度为5，初始值为0
			bool link[5]{ 0,1,0,1,0 };
			//定义数组link的第一个元素为1
			link[0] = 1;
			//打印栈区数组link的所有元素
			for (bool a : link)
				cout << a << " ";
			cout << endl;

			{
				//数组内容格式转换组合
				//定义一个字符串a，初始值为0
				string a{ 0 };
				//将数组的前两个元素相加，后两个元素相加，最后一个元素不变，组合成一个字符串输入变量a中
				a = to_string(link[0] + link[1]) + to_string(link[2] + link[3]) + to_string(link[4]);
				//将字符串a转换为整数b
				auto b = stoi(a);
				b = b + 1;
				//打印整数
				cout << "b = " << b << endl;
			}

			{
				//使用指针取内存地址的值
				cout << "*(link + 2) = " << *(link + 2) << endl;
			}

			{
				//数组复制
				//定义一个新的栈区数组link1，长度为5，初始值为0
				bool link1[5]{ 0 };
				//使用memcpy函数将数组link的内容复制到数组link1中，复制的字节数为数组link的大小
				memcpy(link1, link, sizeof(link));
				//打印数组link1的所有元素
				cout << link1[0] << link1[1] << link1[2] << link1[3] << link1[4] << endl;
			}

			{
				//二维数组
				int a[2][2]{ 0,0,0,0 };
				a[0][0] = 1;
				a[1][1] = 1;
				cout << a[0][0]<<" | "<< a[0][1] << endl;
				cout << a[1][0]<<" | "<< a[1][1] << endl;
			}
		}

		//堆区
		{
			//定义一个堆区数组，长度为5，初始值为0
			int* link = new int[5](0);
			//打印堆区数组的第二个元素
			cout << link[1] << endl;
			//释放堆区数组的内存空间
			delete[]link;
			link = nullptr;
		}

		//容器数组vector
		{
			//定义一个int类型的vector数组link，长度为5
			vector<int>link(5);
			//打印vector数组link的第二个元素
			cout << link[1] << endl;
			//向vector数组link中添加元素
			link.push_back(10);
			link.push_back(11);
			//打印vector数组link的第七个元素
			cout << link[6] << endl;

			//遍历
			{
				//下标访问方法：通过下标访问vector数组link的每个元素
				for (int i = 0;i < link.size();i++)
					cout << link[i] << "/";
				cout << "\n";

				//使用迭代器遍历vector数组link
				//定义一个迭代器itr，指向vector数组link的起始位置
				std::vector<int>::iterator itr = link.begin();
				//使用迭代器遍历vector数组link，直到迭代器指向数组的结束位置
				for (auto itr = link.begin(); itr != link.end(); itr++)
					cout << *itr << " ";
				cout << "\n";

				//使用自动类型推导的范围for循环遍历vector数组link
				for (auto &d : link)
					cout << d << "|";
				cout << "\n";
			}

			//vector的搜索，插入，删除
			{
				//定义一个整型变量i，初始值为0
				int i = { 0 };
				//提示用户输入需要查找的元素
				cout << "Find And Delete>>";
				//将用户输入的元素存储到变量i中
				cin >> i;
				//使用find函数在vector数组link中查找元素i
				auto f = find(link.begin(), link.end(), i);
				//判断查找元素是否存在于vector数组link中，若存在则打印查找结果及其在数组中的下标位置
				if (f != link.end())
					cout << "Find " << *f << " In " << f - link.begin() << endl;
				else { cout << "Not Find" << endl; }
				//循环遍历vector数组link进行搜索
				vector<int>linkpos;
				for (int g = 0; g < link.size(); g++)
				{
					if (link[g] == i)
						linkpos.push_back(g);
				}
				for (auto h : linkpos)
					cout << "Find " << i << " In " << h << "\n";

				//在数组link中的指定位置插入指定元素
				int i_p;
				cout << "Insert Point(0~" << link.size() << ")>>";
				cin >> i_p;
				cout << "Insert Element>>";
				int insert_element;
				cin >> insert_element;
				cout << "Insert>>";
				if (i_p < 0 || i_p >link.size()) {
					cout << "Index Out Of Bounds!" << endl;
					return 1;
				}else cout << "Success!" <<endl;
				auto insert_point = link.begin() + i_p;
				link.insert(insert_point, insert_element);

				//使用erase函数删除vector数组link中所包含的所有元素i
				cout << "Delete>>";
				link.erase(remove(link.begin(), link.end(), i), link.end());
				cout << "Success Delete " << i << endl;
				cout << "Remaining>>";
				for(auto j : link)
					cout << j << " ";
				cout << "\n";
			}

			//vector的排序
			{
				//使用sort函数对vector数组link进行排序，排序范围为数组的起始位置到结束位置
				//正序排序
				sort(link.begin(), link.end());
				cout << "Sorted>>";
				for (auto j : link)
					cout << j << " ";
				cout << "\n";
				//逆序排序
				sort(link.rbegin(), link.rend());
				cout << "Reverse Sorted>>";
				for (auto j : link)
					cout << j << " ";
				cout << "\n";
			}
		}
	}

*/

//vector数组的空间使用效率
/*
	{
		//vector初始化只定义元素数量
		vector <int> link;
		vector <int> like(5);
		//size()函数返回数组的元素数量
		cout << "link.size()= " << link.size() << endl;
		cout << "like.size()= " << like.size() << endl;
		//capacity()函数返回数组的空间大小
		//初始化元素数量不影响数组空间
		cout << "link.capacity()= " << link.capacity() << endl;
		cout << "like.capacity()= " << like.capacity() << endl;
		//resize()函数可扩充数组的元素数量，并初始化新元素
		link.resize(10);
		//reserve()函数只扩充数组的空间，不添加新元素
		like.reserve(10);
		cout << "link.size()= " << link.size() << endl;
		cout << "link.capacity()= " << link.capacity() << endl;
		cout << "like.size()= " << like.size() << endl;
		cout << "like.capacity()= " << like.capacity() << endl;

		//clear()函数清空数组的元素，但不改变数组的空间大小
		link.clear();
		//shrink_to_fit()函数将数组的空间大小缩小到与元素数量相同
		link.shrink_to_fit();
		cout << "link.size()= " << link.size() << endl;
		cout << "link.capacity()= " << link.capacity() << endl;
		//注：reserve()函数不能释放数组空间
		like.reserve(0);
		cout << "like.size()= " << like.size() << endl;
		cout << "like.capacity()= " << like.capacity() << endl;
	}
	cout << "\n" ;
	{
		//元素空间动态变化
		int c = 0;
		vector <int> link;
		for (int i = 0; i < 100; i++)
		{
			link.push_back(i);
			if (link.capacity() != c)
			{
				c = link.capacity();
				cout << "link.capacity()= " << c << endl;
			}
		}
	}
	cout << "\n";
	{
		//插入函数的效率
		vector <string> link;
		{
			//push_back()函数插入元素
			link.push_back("like");
			//1、创建一个临时对象，2、将临时对象拷贝到数组中，3、销毁临时对象
			//注：插入元素可确定元素的位置，若不确定则会在数组末尾插入元素
		}
		link.clear();
		{
			//emplace_back()函数插入元素
			link.emplace_back("like");
			//1、在数组末尾直接创建元素，2、无需拷贝，3、无需销毁
			//注：无法直接确定元素的位置
		}
	}
*/

//模拟base16编码转换
/*
	{
		//定义编码前字符串base16_str
		string base16_str;
		cout << "BASE16_STRING>>";
		cin >> base16_str;
		//定义编码后字符串base16_enc
		string base16_enc;
		//定义解码后字符串base16_dec
		string base16_dec;
		//编码
		{

			for (unsigned char c : base16_str)
			{
				//将每个字符的高四位和低四位分别转换为对应的base16编码字符，并拼接到base16_enc字符串中
				base16_enc += base16_enc_tab[(c >> 4) & 0x0F];
				base16_enc += base16_enc_tab[c & 0x0F];
			}
			cout << "BASE16_ENC>>" << base16_enc << endl;
		}
		//解码
		{
			for (int i = 0; i < base16_enc.size(); i += 2)
			{
				//将每两个base16编码字符转换为对应的字符，并拼接到base16_dec字符串中
				unsigned char c = (unsigned char)((base16_enc_tab.find(base16_enc[i]) << 4) | base16_enc_tab.find(base16_enc[i + 1]));
				base16_dec += c;
			}
			cout << "BASE16_DEC>>" << base16_dec << endl;
		}
	}
*/

//模拟制作缓存数据库
/*
	{
		string command_main;

		//定义一个字符串变量command，用于存储用户输入的命令
		string command;
		//定义一个字符串变量key，用于存储用户输入的标识
		string key;
		//定义一个字符串变量content，用于存储用户输入的内容
		string content;
		//定义vector数组，用于存储用户输入的字符串数据
		vector<string>data_key;
		vector<string>data_content;

		//使用while循环，使程序持续运行，直到用户输入exit命令
		while (command_main != "退出")
		{
			//定义一个字符串变量input，用于接收用户输入的内容
			cout << "命令，标识，内容>>";
			string input;
			getline(cin, input);

			{

				//获取用户输入的命令
				istringstream iss(input);
				string first;
				iss >> first;
				command = first;
				//根据用户输入的命令，执行相应的操作
				if (command == "添加")
				{
					iss >> key;
					iss >> content;
					data_key.push_back(key);
					data_content.push_back(content);
					cout << "添加成功" << endl;
				}
				else if (command == "查看")
				{
					iss >> key;
					auto it = find(data_key.begin(), data_key.end(), key);
					if (it != data_key.end())
					{
						int index = distance(data_key.begin(), it);
						cout << "内容为：" << data_content[index] << endl;
					}
					else
					{
						cout << "未找到对应标识" << endl;
					}
				}
				else if (command == "删除")
				{
					iss >> key;
					auto it = find(data_key.begin(), data_key.end(), key);
					if (it != data_key.end())
					{
						int index = distance(data_key.begin(), it);
						data_key.erase(it);
						data_content.erase(data_content.begin() + index);
						cout << "删除成功" << endl;
					}
					else
					{
						cout << "未找到对应标识" << endl;
					}
				}
				else if (command == "索引")
				{
					cout << "列表：" << endl;
					for (const auto& k : data_key)
					{
						cout <<"\t" << k << endl;
					}
				}
				else if (command == "退出")
				{
					cout << "退出程序" << endl;
					command_main = "退出";
				}
				else
				{
					cout << "未知命令" << endl;
				}
			}
		}
	}
*/

//函数调用
/*
	{
		int a;
		int b;
		cout << "a = ";
		cin >> a;
		cout << "b = ";
		cin >> b;
		int test_ab_ct = test_ab(a, b);
		auto test_function = test(65);
		cout << test_function << endl;
		cout <<"a + b = " << test_ab_ct << endl;
	}

	{
		//定义一个指针变量a_pointer，初始值为nullptr，表示指针未指向任何有效的内存地址
		int* a_pointer = nullptr;
		//定义一个整型变量a_number，初始值为10
		int a_number = 10;
		//将指针变量a_pointer指向整型变量a_number的内存地址
		a_pointer = &a_number;
		//调用指针变量a_pointer所指向的内存地址，获取整型变量a_number的值，并打印出来
		cout << "*a_pointer = " << *a_pointer << endl;//指针变量a_pointer所指向的内存地址的值，即整型变量a_number的值
		cout << "a_pointer = " << a_pointer << endl;//指针变量a_pointer的值，即整型变量a_number的内存地址
		cout << "&a_pointer = " << &a_pointer << endl;//指针变量a_pointer的内存地址
	}

	{
		//使用指针及引用给函数传递参数
		//定义整形变量pointer_a、pointer_b、quoted_a、quoted_b,
		//pointer_a和pointer_b用于测试指针传递参数，quoted_a和quoted_b用于测试引用传递参数
		int pointer_a;int pointer_b;int quoted_a;int quoted_b;
		cout << "Pointer a b>>";
		cin >> pointer_a >> pointer_b;
		cout << "Quoted a b>>";
		cin >> quoted_a >> quoted_b;
		//调用函数test_pointer_ab()，传递指针参数pointer_a和pointer_b的地址
		test_pointer_ab(&pointer_a, &pointer_b);
		cout << "pointer_a=" << pointer_a << endl;
		cout << "pointer_b=" << pointer_b << endl;
		//调用函数test_quoted_ab()，传递引用参数quoted_a和quoted_b
		test_quoted_ab(quoted_a, quoted_b);
		cout << "quoted_a=" << quoted_a << endl;
		cout << "quoted_b=" << quoted_b << endl;
	}
	
	{
		int32_t array[5]{ 0, 0, 0, 0, 0 };
		int32_t arr;
		cout << "&array[0] = " << &array[0] << endl;
		cout << "sizeof(array) = " << sizeof(array) << endl;
		arr = test_array(array);
		cout << "array[2] = " << arr << endl;
		for(int a : array)
		{
			cout << a << " ";
			cout << endl;
		}
	}

	{
		vector<int> Test_vector{ 0, 1, 2 };
		Test_vector_array(Test_vector);
		for (int i : Test_vector)
		{
			cout << i << " ";
		}
	}
*/

//char*、vector与string之间的转换
/*
	{
		//char* -> vector
		{
			//定义一个字符串常量str，初始值为"Test Word"
			//结尾处存在一个'\0'字符，表示字符串的结束
			const char* str = "Test Word";
			//使用strlen()函数计算字符串的长度，返回值类型为size_t
			//strlen()函数属于C语言函数，其返回值不包含结尾的'\0'字符
			int size = strlen(str);
			//字符串长度因为不包含结尾的'\0'字符，所以打印显示长度-1
			cout << "size = " << size << endl;
			//定义一个vector数组vec
			//字符串常量默认指针指向0址，使用str + size - 1可以获取字符串的最后一个字符的地址
			//+1是为了包含结尾的'\0'字符，使vector数组vec的大小为size + 1
			vector <unsigned char> vec(str, str + size + 1);
			//vec数组可视为字符串的容器，使用data()函数获取vec数组的首地址，并打印出来
			cout << vec.data() << endl;
			//打印vec数组的大小，即字符串的长度加1
			cout << "vec.size() = " << vec.size() << endl;

			//思路：获取字符串的地址，使用strlen()函数计算长度，直接将字符串的首地址和长度传递给vector数组的构造函数，完成char*到vector的转换
		}

		//栈区数组 -> vector
		{

			{
				//定义一个栈区数组arr，初始值为{1, 2, 3, 4, 5}
				int arr[5] = { 1, 2, 3, 4, 5 };
				//使用sizeof()函数计算数组的大小，返回值类型为size_t
				//sizeof()函数属于C++语言函数，其返回值包含数组中所有元素的字节数
				int size = sizeof(arr) / sizeof(arr[0]);
				//打印数组的大小，即元素的个数
				cout << "size = " << size << endl;
				//定义一个vector数组vec，将栈区数组arr的内容复制到vec中
				vector <int> vec(arr, arr + size);
				//打印vec数组的大小，即元素的个数
				cout << "vec.size() = " << vec.size() << endl;

				//思路：获取栈区数组的总长度和单个元素的长度，计算出数组的元素个数，然后直接将数组的首地址和元素个数传递给vector数组的构造函数，完成数组到vector的转换
			}
			{
				//定义一个栈区数组arr，初始值为"测试数组"
				char arr[]{ "测试数组" };
				//使用sizeof()函数获取数组的总字节数，使用指针运算获取数组的首地址和末地址后存储到vector数组data中
				//arr + sizeof(arr)也可写为 &arr[sizeof(arr)]
				vector <unsigned char> data(arr, arr + sizeof(arr));
				//比较sizeof()函数和vector数组的size()函数的返回值，验证两者是否一致
				cout << "data.size() = " << data.size() << ":" << sizeof(arr) << " = sizeof(arr)" << endl;

				//思路：获取栈区数组的总字节数，直接将数组的首地址和末地址传递给vector数组的构造函数，完成数组到vector的转换
			}
		}

		//string -> vector
		{
			string str{ "测试string到vector" };
			//使用string的begin()和end()函数获取字符串的首地址和末地址后存储到vector数组vec中
			vector <unsigned char> vec(str.begin(), str.end());
			//使用begin()和end()函数不能保证vector数组vec中包含字符串的结尾'\0'字符
			cout << "vec.size() = " << vec.size() << ":" << str.size() << " = str.size()" << endl;
			//使用clear()函数清空空间标识
			vec.clear();cout << "\n";
			//使用data()函数获取字符串的首地址，使用size()函数获取字符串的长度，再加1以包含结尾的'\0'字符后存储到vector数组vec中
			vec.assign(str.data(), str.data() + str.size() + 1);
			//比较vector数组vec的size()函数和string的size()函数的返回值，确保转换后vec数组中包含字符串的结尾'\0'字符
			cout << "vec.size() = " << vec.size() << ":" << str.size() << " = str.size()" << endl;

			//思路：获取字符串的首地址和长度，直接将字符串的首地址和长度传递给vector数组的构造函数,完成string到vector的转换
		}

		//vector -> string
		{
			string str{ "测试vector到string" };
			vector <unsigned char> vec(str.data(), str.data() + str.size() + 1);
			//使用vector数组vec的begin()和end()函数获取首地址和末地址后存储到string对象outstr中
			string outstr(vec.begin(), vec.end());
			//打印转换后的string对象
			cout << "outstr = " << outstr << endl;
			//比较初始string对象str的size()函数和转换后的string对象outstr的size()函数的返回值
			//在vector数组转为string对象时会在结尾自动添加'\0'字符，导致outstr的size()函数返回值比str的size()函数返回值大1
			cout << "outstr.size() = " << outstr.size() << ":" << str.size() << " = str.size()" << endl;
			//使用clear()函数清空空间标识
			vec.clear();cout << "\n";
			//使用data()函数获取字符串的首地址，使用size()函数获取字符串的长度,不再加1以避免在vector转string时重复添加'\0'字符
			vec.assign(str.data(), str.data() + str.size());
			//使用assign()函数将vector数组vec的内容赋值给string对象outstr
			outstr.assign(vec.begin(), vec.end());
			//打印转换后的string对象
			cout << "outstr = " << outstr << endl;
			//比较初始string对象str的size()函数和转换后的string对象outstr的size()函数的返回值
			cout << "outstr.size() = " << outstr.size() << ":" << str.size() << " = str.size()" << endl;

			//思路：直接将vector数组的内容赋值给string对象的构造函数，完成vector到string的转换
		}
	}
*/

//base16编码函数库开发
/*
	{
		string test_str;
		cin >> test_str;
		vector<unsigned char> test_vector(test_str.data(), test_str.data() + test_str.size() + 1);
		auto encoded_str = Base16Encode(test_vector);
		cout << "Encoded String: " << encoded_str << endl;
		auto decoded_vector = Base16Decode(encoded_str);
		cout << "Decoded Vector Data: " << decoded_vector.data() << endl;
	}
*/

//利用多文件与函数实现缓存数据库
/*
	{
	cout << "command>>add/delete/view/index/clear/exit" << endl;

		while (true)
		{
			cout << "command key content>>";

			string input;
			getline(cin, input);
			string command;
			string key;
			string content;
			istringstream iss(input);

			iss >> command >> key >> content;

			if (command == "exit") {
				return 0;
			}

			char CDB_Return = Cache_DataBase(command, key, content);

			if (CDB_Return) {
				cout << "True" << endl;
			}
			else {
				cout << "False" << endl;
			}

		}
	}
*/

//输入与输出

{
/*
		//cout stdout 1
		//cerr stderr 2
	{
		//cout标准输出iostream
		{
			//指定cout的输出格式
			//输出整数默认为10进制
			cout << 100 << endl;

			//将oct（八进制）类型传递给cout，使其输出的整数显示为八进制
			cout << oct << 100 << " " << 130 << endl;
			cout << 150 << endl;

			//将hex（十六进制）类型传递给cout
			cout << hex << 100 << " " << 130 << endl;

			//将dec（十进制）类型传递给cout
			cout << dec << endl;
			cout << 100 << endl;

			//bool类型的true与false
			cout << true << " " << false << endl;
			//传递类型boolalpha
			cout << boolalpha << true << " " << false << endl;
		}

		//cout的无格式输出
		{
			//连续与单个put函数调用
			cout.put('A').put('B');
			cout.put('C');
			//使用编码表直接输出
			cout.put(68);

			//处理成块字符
			cout.write("123", 3);
			string test = "test";
			cout.write(test.c_str(), test.size());
		}

		//cout刷新缓冲区
		{
			//flush函数仅刷新缓冲区
			cout << flush;
			//endl函数刷新缓冲区并输入换行符
			cout << endl;
		}

		//cerr
		{
			//cerr标准错误输出 无缓冲

			cerr << "test 01\n";

			//将cout输出到1.txt中，将cerr输出到2.txt中
			//firstcpp.exe 1>1.txt 2>2.txt
			//将cout输出到log.txt中，将cerr输出到1中
			//firstcpp.exe >log.txt 2>&1
		}

	}*/
	{/*
		//单行输入getline
		{
			for (;;) {
			char char_buf[1024]{ 0 };
			cout << ">>";
			cin.getline(char_buf, sizeof(char_buf) - 1);
			cout << char_buf << endl;
			if (strstr(char_buf, "exit")) {break;}
			}
		}
		{
			string line;
			getline(cin, line);
			cout << line << endl;
		}

		//单字符输入get
		{
			string cmd;
			for (;;) {
				char c = cin.get();
				if (c == '\n' || c == ';') {
					cout << ">>" << cmd << endl;
					cmd = "";
					continue;
				}
				cmd += c;
			}
		}*/
		//错误输入处理
		{
			for (;;) {
				cout << "Number>>" << flush;
				string line;
				int Number;
				cin >> Number;
				//if(cin.rdstate() == std::ios_base::failbit){}
				if (cin.fail()) {
					cin.clear();
					getline(cin, line);
					cout << "Fail with " << "'" << line << "'" << endl;
					continue;
				}
				cout << "Number>>" << Number << endl;
			}
		}


}








	}
//main函数外
}
// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
