#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	//mutable�ؼ���
	mutable int score;

public:
	Person() : name("xiaoming"),age(0),score(0){}
	Person(string name,int age,int score):name(name),age(age),score(score){}

	//������
	void  display() const {
		score = 20;
		cout << "name= " << name << ", score= "<<score << endl;
	}
};

//int main() {
//	//������
//	const Person xiaoming; 
//	//������ֻ�ܵ��ó�����
//	xiaoming.display();
//	xiaoming.score = 30;
//}
