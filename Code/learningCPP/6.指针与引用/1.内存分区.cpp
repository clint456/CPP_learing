#include <iostream>
using namespace std;

//全局变量
int g_a = 10;
//全局常量
const int g_b = 10;
//全局静态变量
static int g_s_a = 10;
//全局静态常量
static const int g_s_b = 10;

//int main()
//{
//	//定义局部__
//	int a = 10;
//	const int b = 10;
//	static int s_a = 10;
//	static const int s_b = 10;
//
//	cout << &g_a << endl; //全局区
//	cout << &g_b << endl;
//	cout << &g_s_a << endl;
//	cout << &g_s_b << endl;
//
//	cout << &a << endl; //栈区
//	cout << &b << endl; //栈区
//
//	cout << &s_a << endl; //全局区
//	cout << &s_b << endl;
//	return 0;
//}