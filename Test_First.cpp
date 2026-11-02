#include <iostream>;
#include <vector>;

using namespace std;

bool test(int test_number)
{
	test_number = test_number + 10;
	cout << "test_number=" << test_number << endl;
	return 1;
}

int test_ab(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

void test_pointer_ab(int* a, int* b)
{
	*a = *a * 2;
	*b = *b * 2;
}

void test_quoted_ab(int& a, int& b)
{
	a = a * 3;
	b = b * 3;
}

int test_abc(int a, int b, int c) 
{
	return a * b * c;
}