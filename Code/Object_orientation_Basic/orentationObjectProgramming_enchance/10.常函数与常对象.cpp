#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	//mutable关键字
	mutable int score;

public:
	Person() : name("xiaoming"),age(0),score(0){}
	Person(string name,int age,int score):name(name),age(age),score(score){}

	//常函数
	void  display() const {
		score = 20;
		cout << "name= " << name << ", score= "<<score << endl;
	}
};

//int main() {
//	//常对象
//	const Person xiaoming; 
//	//常对象只能调用常函数
//	xiaoming.display();
//	xiaoming.score = 30;
//}
