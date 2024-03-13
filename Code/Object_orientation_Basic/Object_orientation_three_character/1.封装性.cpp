#include <iostream>

using namespace std;


// 属性的封装：
// WHY: 因为有一些属性，不希望外界直接访问，特别是不想直接被修改。
// HOW: 属性私有化，并且提供指定的访问函数。
class Person {
private:
	string name;
	int age;

public://好处：1.
			//1.可以对传的参数进行限制
			//2.避免代码的复用性
			//3.提高代码的可读性

	//创建构造函数，进行属性初始化
	Person() :name(""),age(0){ }

	//创建访问函数
	int getAge() {
		return age;
	}
	//创建修改属性函数
	void setAge(int age) {
		//对传的参数进行限制
		if (age >= 0 && age <= 150) {
			this->age = age;
		}

	}
};

int main() {
	// 创建对象
	Person xiaobai;
	//// 属性赋值
	//xiaobai.name = "xiaobai";
	////这里的属性不希望被外部直接修改
	//xiaobai.age = -100000;
	// 属性赋值
	xiaobai.setAge(100);
	cout << xiaobai.getAge() << endl;


	return 0;
}