#include <iostream>

using namespace std;

//ʹ�ÿ�ָ�룬���ó�Ա����
class Person {
public:
	int age;

	Person():age(0){}

	Person(int age) : age(age){}

	void func1(){
		cout << "func1ִ����" << endl;
	}

	void func2()
	{
		if (this == nullptr) {
			cout << "this��һ����ָ��" << endl;
			return;
		}
		//�����н��г�Ա����ʱ��Ĭ���Ƿ��ʳ�Ա������
		cout << age << endl;//ʡ����this->age
		cout << "func2ִ����" << endl;
	}
};

//int main()
//{
//	Person *xiaoming = nullptr;
//	//ʹ�ÿ�ָ����г�Ա����
//	//cout << xiaoming->age << endl;
//	//���÷���
//	xiaoming->func1();
//	xiaoming->func2();
//	return 0;
//}