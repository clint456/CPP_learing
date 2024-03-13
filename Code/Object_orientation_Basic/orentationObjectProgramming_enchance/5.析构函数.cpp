#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	int* p;


	//方式二：构造函数列表
	//无参
	Person() : name(" "), age(0), gender(" "), score(0) {}
	//有参
	Person(string n, int a, string g, int s) :name(n), age(a), gender(g), score(s) { }

	//自定义拷贝构造函数
	Person(const Person& p) : name(p.name), age(p.age + 1), gender(p.gender), score(p.score) {
		cout << "拷贝构造函数调用了" << endl;
	}

	//析构函数： 使用~开头，并且不能有参数
	~Person(){
		cout << "析构函数调用了" << endl;
		if (p != nullptr) {
			delete p;
			cout << "清除 int* p了" << endl;
			//防止野指针
			p = nullptr;
		}
	}
};

//void test()
//{
//	Person person;
//}
//
//int main()
//{
//	//栈
//	//test()函数是在栈上开辟的，调用完成就会销毁
//	//就会触发析构
//	test();
//
//	//堆内存
//	Person* xiaoming = new Person();
//	xiaoming->p = new int(10);
//	int* tmp = xiaoming->p;
//	//手动释放堆空间
//	//这里不会销毁 xiaoming->p
//	delete xiaoming;
//
//	cout << *tmp << endl;
//	system("pause");
//	return 0;
//}