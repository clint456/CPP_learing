////A class is a C++ vehicle for translating an abstraction to a user-defined type
//#include <iostream>
//
//using namespace std;
//
//class Dog {
//public:
//	string name;
//	int age;
//};
//
//class Person {
//public:
//	string name;
//	int age;
//	Dog pet;  // �ȼ��� Dog pet = Dog(); ��Dog��ΪPerson��һ������
//
//
//	//��ջ�ռ��д���һ������ָ�룬��ʱĬ��ֵΪnullptr
//	//��Ҫע��ռ�����
//	Dog* otherPet;  
//
//};
//
////int main()
////{
////	//����һ��Person����
////	Person xiaoming;
////	xiaoming.name = "xiaoming";
////	xiaoming.age = 18;
////
////	xiaoming.pet.name = "xiaobai";
////	xiaoming.pet.age = 1;
////
////	cout << xiaoming.name << endl;
////	cout << xiaoming.pet.name << endl;
////
////	//����ʹ��ʱ����Ҫ�ڶѿռ�������ռ�
////	xiaoming.otherPet = new Dog();
////	xiaoming.otherPet->name = "haha";
////	xiaoming.otherPet->age = 2;
////
////	cout << xiaoming.otherPet->name << endl;
////	cout << xiaoming.otherPet->age << endl;
////
////	system("pause");
////	delete xiaoming.otherPet;
////
////	return 0;
////}