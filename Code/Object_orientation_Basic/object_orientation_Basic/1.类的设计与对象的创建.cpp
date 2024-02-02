// object_orientation_Basic.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;

// 使用关键字 class来描述一个类
// 类：具有相同特征、功能对象的集合
// 类属性/特征： 用变量
// 类方法/行为： 用函数


// 访问权限
// 用来修饰属性、行为可以在什么位置可以访问
// private: 私有权限，只能在当前的类中访问，其他位置不可以访问。
// protected: 保护权限，类外不能访问，可以在当前类和子类访问。
// public:  公开权限，可以在任意位置访问。

// 注意事项：
// 类中定义的属性、方法，默认都是private私有权限的。
// 如果需要在类外访问，就修改其权限为public

/*/
class Person {
public:
	// 开辟空间在栈/堆区（占内存空间）
	string name;
	int age;
	string gender;	
	int score;

	//开辟空间在代码区(但所占空间大小不是0，而是1Byte)
	void eat()
	{
		cout << "eat" << endl;
	}

	void sleep()
	{
		cout << "sleep" << endl;
	}
};
*/

//int main()
//{
//	// 创建对象：
//	// 从一个类中找到一个实体：实例化
//	
//	// 方式一：
//	Person xiaoming = Person();
//	// 方式二: 对象指针
//	Person *xiaoli = new Person(); //new 在堆上创建
//	//方式三：隐式调用
//	Person xiaobai; // 等价与方法一
//
//	// 如果类中是有属性的，所有的属性所占空间大小的和 就是 对象的空间大小。
//	// 如果类中是没有属性的，对象所占的空间大小不是0Byte，而是1Byte，用来表示对象已经创建成功了。
//	cout << sizeof(xiaoming) << endl;
//
//	// 成员访问 : (包括 属性、函数）
//	// 情况一：没有使用new创建对象，在栈上开辟
//	// 使用 ”对象.方法/属性 “
//	xiaoming.age = 20;
//	xiaoming.gender = "male";
//	xiaoming.name = "xiaoming";
//	xiaoming.score = 100;
//
//	//情况二： 使用new创建对象，在堆上开辟
//	// 1.使用 ”对象 -> 方法/属性“
//	// 2.(*对象).方法/属性
//	xiaoli->name = "xiaoli";
//	xiaoli->age = 18;
//	(*xiaoli).gender = "female";
//	(*xiaoli).score = 99;
//
//
//
//
//	return 0;
//}