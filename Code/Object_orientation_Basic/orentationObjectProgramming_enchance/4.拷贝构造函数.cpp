#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	//��ʽ�������캯���б�
	//�޲�
	Person() : name(" "), age(0), gender(" "), score(0) {}
	//�в�
	Person(string n, int a, string g, int s) :name(n), age(a), gender(g), score(s) { }

	//�Զ��忽�����캯��
	Person(const Person& p) : name(p.name),age(p.age+1),gender(p.gender),score(p.score) {
		cout << "�������캯��������" << endl;
	}
};

//int main()
//{
//	//��������
//	Person xiaoming("xiaoming", 19, "male", 99);
//	//��������
//		//�൱�ڴ�����һ���µĶ����������Ų�ͬ�Ŀռ䣬��������ͬ������ֵ
//		//����������Զ����á��������캯����
//	Person xiaohei = xiaoming; //��ʽ���� Person xiaohei = Person(xiaoming)
//	//���Գ�ʼ��
//	cout << xiaoming.age << endl;
//	cout << xiaohei.age << endl;
//
//}