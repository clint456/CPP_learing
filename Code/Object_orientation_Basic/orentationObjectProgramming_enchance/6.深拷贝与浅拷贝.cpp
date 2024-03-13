//#include <iostream>
//using namespace std;
//
//class Cat {
//public:
//	string name;
//	int age;
//};
//
////浅拷贝：
////深拷贝：
//class Person {
//public:
//	int age;
//	Cat* pet;
//
//	Person() {
//		age = 0;
//		pet = new Cat();
//		cout << "默认,构造函数调用了" << endl;
//	}
//
//	//拷贝构造函数
//	//【浅拷贝】
//	//Person(const Person& p)
//	//{
//	//	//默认即浅拷贝【值拷贝】
//	//	age = p.age;
//	//	pet = p.pet;
//	//}
//	//【深拷贝】
//	Person(const Person& p) {
//		age = p.age;
//		//这里再new一个Cat出来，给xiaohei
//		pet = new Cat();
//		cout << "new Cat给拷贝的对象了" << endl;
//		pet->name = p.pet->name;
//		pet->age = p.pet->age;
//		cout << "将对象的值赋值过去了" << endl;
//	}
//
//	//析构函数
//	~Person() {
//		if(pet != nullptr){
//			delete pet;
//			//防止出现野指针的情况
//			pet = nullptr;
//			cout << "销毁new出来的Cat了" << endl;
//		}
//	}
//};
//
//int main()
//{
//	//
//	Person xiaobai;
//	Person xiaohei = xiaobai;
//	//析构函数先销毁xiaohei 、 再销毁xiaobai
//	return 0;
//}