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

//�̳е��﷨
// class �������� : [�̳з�ʽ] ��������
class Dog : public Animal {

};

int main() {
	//����Dog����
	Dog dog = Dog();
	cout << dog.age << endl;
	dog.walk();

	return 0;
}