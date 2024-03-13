#include <iostream>

using namespace std;

class Animal {
public:
	int age;
	void walk()
	{
		cout << "Animal walk" << endl;
	} 
};

//继承的语法
// class 子类类名 : [继承方式] 父类类名
class Dog : public Animal {

};

int main() {
	//创建Dog对象
	Dog dog = Dog();
	cout << dog.age << endl;
	dog.walk();

	return 0;
}