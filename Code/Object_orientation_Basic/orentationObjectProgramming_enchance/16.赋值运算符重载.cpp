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
	//int *p = new int(10);// pָ��һ��ֵΪ10��int����
	Person(string name, int age, string gender, int score) : name(name), age(age), gender(gender), score(new int(score)) {}

	//������캯��
	Person(const Person& p) {
		name = p.name;
		age = p.age;
		gender = p.gender;
		//scoreָ��ָ��ֵΪ *p.score , �¿��ٿռ�
		score = new int(*p.score);
	}

	//=��������غ���
	Person& operator=(const Person& p) {
		name = p.name;
		age = p.age;
		gender = p.gender;
		score = new int(*p.score);
	}

	//������������ֹ����Ұָ������
	//�������ٵ�ʱ��ִ�иú���
	~Person() {
		if (score != nullptr) {
			delete score;
			score = nullptr;
		}
	}
};

//��������� <<����
ostream& operator<<(ostream& os, const Person& p) {
	//�ַ���ƴ��
	os << "name=" << p.name << ", age= " << p.age << ", gender=" << p.gender << ", score= " << *p.score;
	return os;
}


int main() {
	Person xiaobai("xiaobai", 20, "female", 10);
	cout << xiaobai << endl;

	//ǳ����������Ĭ�ϵĿ������캯����ֵ������
	//һ��ǳ���������������������Ҫ���ٶѿռ�ʱ���ͻ����Ұָ������
	//�ڵȺŸ�ֵ�����У�Ҳ��Ĭ�ϵ���ǳ������������Ҫ�� ��=�� ��������
	Person xiaohei = xiaobai;
	
	cout << xiaohei << endl;

	return 0;
}