#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	int* p;


	//��ʽ�������캯���б�
	//�޲�
	Person() : name(" "), age(0), gender(" "), score(0) {}
	//�в�
	Person(string n, int a, string g, int s) :name(n), age(a), gender(g), score(s) { }

	//�Զ��忽�����캯��
	Person(const Person& p) : name(p.name), age(p.age + 1), gender(p.gender), score(p.score) {
		cout << "�������캯��������" << endl;
	}

	//���������� ʹ��~��ͷ�����Ҳ����в���
	~Person(){
		cout << "��������������" << endl;
		if (p != nullptr) {
			delete p;
			cout << "��� int* p��" << endl;
			//��ֹҰָ��
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
//	//ջ
//	//test()��������ջ�Ͽ��ٵģ�������ɾͻ�����
//	//�ͻᴥ������
//	test();
//
//	//���ڴ�
//	Person* xiaoming = new Person();
//	xiaoming->p = new int(10);
//	int* tmp = xiaoming->p;
//	//�ֶ��ͷŶѿռ�
//	//���ﲻ������ xiaoming->p
//	delete xiaoming;
//
//	cout << *tmp << endl;
//	system("pause");
//	return 0;
//}