//#include <iostream>
//
//using namespace std;
//
//class A{};
//
//class MyNumber {
//public:
//	//在类中定义的静态变量成员，必须在类内定义，在类外初始化赋值
//	static int a;
//
//	//如果----是静态常量，且数据类型是 整形 【short,char,int,long,long long, bool 等】
//	// 允许在定义的时候初始化赋值 
//	const static int PI = 1;
//
//	// 否则----任然需要在类外定义
//	const static float Exp;
//
//	static void show()
//	{
//		cout << "类中的静态函数调用了" << endl;
//	}
//
//
//};
//
////在类外对静态成员，进行赋值
//// 
////存储类型 类::静态变量 = 值
//int MyNumber::a = 100;
////限定符 存储类型 类::静态常量  = 值
//const float MyNumber::Exp = 0.001;
//
//
//int main()
//{
//	//用对象来访问
//	MyNumber number1;
//	MyNumber number2;
//
//	cout << number1.a << endl;
//	cout << number2.a << endl;
//	cout << number1.Exp << endl;
//	number1.a = 200;
//	//类来访问
//	cout << MyNumber::a << endl;
//
//	//调用类中静态函数成员
//	MyNumber::show();
//	number1.show();
//	return 0;
//}