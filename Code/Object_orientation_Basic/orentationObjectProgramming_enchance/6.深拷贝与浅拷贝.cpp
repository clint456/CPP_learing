//#include <iostream>
//using namespace std;
//
//class Cat {
//public:
//	string name;
//	int age;
//};
//
////ǳ������
////�����
//class Person {
//public:
//	int age;
//	Cat* pet;
//
//	Person() {
//		age = 0;
//		pet = new Cat();
//		cout << "Ĭ��,���캯��������" << endl;
//	}
//
//	//�������캯��
//	//��ǳ������
//	//Person(const Person& p)
//	//{
//	//	//Ĭ�ϼ�ǳ������ֵ������
//	//	age = p.age;
//	//	pet = p.pet;
//	//}
//	//�������
//	Person(const Person& p) {
//		age = p.age;
//		//������newһ��Cat��������xiaohei
//		pet = new Cat();
//		cout << "new Cat�������Ķ�����" << endl;
//		pet->name = p.pet->name;
//		pet->age = p.pet->age;
//		cout << "�������ֵ��ֵ��ȥ��" << endl;
//	}
//
//	//��������
//	~Person() {
//		if(pet != nullptr){
//			delete pet;
//			//��ֹ����Ұָ������
//			pet = nullptr;
//			cout << "����new������Cat��" << endl;
//		}
//	}
//};
//
//int main()
//{
//	//
//	Person xiaobai;
//	Person xiaohei = xiaobai;
//	//��������������xiaohei �� ������xiaobai
//	return 0;
//}