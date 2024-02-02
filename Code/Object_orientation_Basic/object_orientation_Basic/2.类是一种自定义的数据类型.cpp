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
//	Dog pet;  // 等价于 Dog pet = Dog(); 以Dog作为Person的一个属性
//
//
//	//在栈空间中创建一个对象指针，此时默认值为nullptr
//	//需要注意空间问题
//	Dog* otherPet;  
//
//};
//
////int main()
////{
////	//创建一个Person对象
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
////	//这里使用时，需要在堆空间上申请空间
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