#include <iostream>

using namespace std;

int main6()
{
	//定义一个整型的变量
	int num = 10;
	//定义一个引用，引用到num
	int& a = num;

	//比较值
	cout << "num = " << num << ",a = " << a << endl;

	//比较地址
	cout << "&num = " << &num << ", &a = " << &a << endl;
	return 0;
} 