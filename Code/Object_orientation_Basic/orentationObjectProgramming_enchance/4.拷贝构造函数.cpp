#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	//方式二：构造函数列表
	//无参
	Person() : name(" "), age(0), gender(" "), score(0) {}
	//有参
	Person(string n, int a, string g, int s) :name(n), age(a), gender(g), score(s) { }

	//自定义拷贝构造函数
	Person(const Person& p) : name(p.name),age(p.age+1),gender(p.gender),score(p.score) {
		cout << "拷贝构造函数调用了" << endl;
	}
};

//int main()
//{
//	//创建对象
//	Person xiaoming("xiaoming", 19, "male", 99);
//	//拷贝构造
//		//相当于创建了一个新的对象，两者有着不同的空间，但有着相同的属性值
//		//这个过程是自动调用【拷贝构造函数】
//	Person xiaohei = xiaoming; //隐式调用 Person xiaohei = Person(xiaoming)
//	//属性初始化
//	cout << xiaoming.age << endl;
//	cout << xiaohei.age << endl;
//
//}