#include <iostream>

using namespace std;

class Person {
private:
	string name;
	int age;
	string gender;
	int* score;

public:
	friend ostream& operator<<(ostream& os, const Person& p);
	Person() :name(""), age(0), gender(""), score(nullptr) {}
	//int *p = new int(10);// p指向一个值为10的int数。
	Person(string name, int age, string gender, int score) : name(name), age(age), gender(gender), score(new int(score)) {}

	//深拷贝构造函数
	Person(const Person& p) {
		name = p.name;
		age = p.age;
		gender = p.gender;
		//score指针指向值为 *p.score , 新开辟空间
		score = new int(*p.score);
	}

	//=运算符重载函数
	Person& operator=(const Person& p) {
		name = p.name;
		age = p.age;
		gender = p.gender;
		score = new int(*p.score);
	}

	//析构函数，防止出现野指针的情况
	//对象销毁的时候，执行该函数
	~Person() {
		if (score != nullptr) {
			delete score;
			score = nullptr;
		}
	}
};

//运算符重载 <<函数
ostream& operator<<(ostream& os, const Person& p) {
	//字符串拼接
	os << "name=" << p.name << ", age= " << p.age << ", gender=" << p.gender << ", score= " << *p.score;
	return os;
}


int main() {
	Person xiaobai("xiaobai", 20, "female", 10);
	cout << xiaobai << endl;

	//浅拷贝，调用默认的拷贝构造函数【值拷贝】
	//一般浅拷贝中如果出现属性中需要开辟堆空间时，就会出现野指针的情况
	//在等号赋值运算中，也是默认调用浅拷贝函数，需要对 “=” 进行重载
	Person xiaohei = xiaobai;
	
	cout << xiaohei << endl;

	return 0;
}