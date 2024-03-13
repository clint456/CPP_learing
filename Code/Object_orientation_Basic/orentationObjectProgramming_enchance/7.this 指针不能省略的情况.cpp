//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int age;
//
//	//构造函数
//	Person() :age(0) { }
//	Person(int age) {
//		//这里出现了局部变量和属性同名的情况
//		//直接使用名字访问，是局部变量
//		//需要访问属性age，那就必须使用this->来显式访问
//		this->age = age;
//	}
//
//	int getAge() {
//		return this->age;
//	}
//};
//
//int main()
//{
//	Person xiaoming(10);
//	cout << xiaoming.getAge() << endl;
//
//	Person xiaobai(20);
//	cout << xiaobai.getAge() << endl;
//	  
//	return 0;
//}