# C++ intermediate

## 1 . 面向对象编程

（object-Oriented Programming）

> - 面向过程：是一种以过程为中心的编程思想，不符合人的思维习惯，编程语言的重用性低、维护困难。
>
> - 面向对象：着眼点在于找到一个能够帮助解决问题的实体，然后委托这个实体来解决问题。

### 1.1 面向对象的三大特点：

> - 封装：把客观的事务封装成抽象的类，并且可以把自己的数据和方法只让可信的类或对象进行操作，对不可信的进行隐藏。类将成员变量和函数封装在类的内部，根据需要设置访问权限，通过成员函数内部管理状态。
> - 继承：表达的是类之间的关系，这种关系使得对象可以继承另外的一类对象的特征和能力。继承的作用：避免公用代码的重复的开发、减少代码的数据冗余。
> - 多态：多态性可以简单的概括为：“一个接口，多种方法”，即多种形态。程序在运行时才决定要调用的函数，它是==面向对象编程的核心。==

####  案例分析

![image-20240131094733470](./C++_intermediate.assets/image-20240131094733470.png)

### 1.2 类与对象

（class and object)

在面向对象的思想中，**着眼点在于找到一个能够帮助解决问题的实体，然后委托这个实体解决问题。**

- **对象：**具有特定功能，能够解决特定问题的实体。
- **类：**由若干个具有相同特征和行为的对象组成的兑现的集合。

> 类是对象的集合；
>
> 对象是类的个体。
>
> ![image-20240131095947481](./C++_intermediate.assets/image-20240131095947481.png)

#### 1.2.1 类的设计和对象的创建

##### 1.2.1.1 类的设计

```cpp
// object_orientation_Basic.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
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

class Person {
public:
	string name;
	int age;
	string gender;	
	int score;

	void eat()
	{
		cout << "eat" << endl;
	}

	void sleep()
	{
		cout << "sleep" << endl;
	}

protected:
	int a;
};
```

##### 1.2.1.2 对象的创建

```cpp
	// 创建对象：
	// 从一个类中找到一个实体：实例化
	
	// 方式一：
	Person xiaoming = Person();
	// 方式二: 对象指针
	Person *xiaoli = new Person(); //new 在堆上创建
	//方式三：隐式调用
	Person xiaobai; // 等价与方法一

	// 如果类中是有属性的，所有的属性所占空间大小的和 就是 对象的空间大小。
	// 如果类中是没有属性的，对象所占的空间大小不是0Byte，而是1Byte，用来表示对象已经创建成功了。
	cout << sizeof(xiaoming) << endl;
```

|              | 使用new                | 没有使用new        |
| ------------ | ---------------------- | ------------------ |
| ==内存开辟== | 在==堆空间==开辟       | 在==栈空间==上开辟 |
| 内存管理     | 需要手动delete         | 不需要手动销毁     |
| 属性初始化   | 自动有默认初始值       | 没有初始值         |
| 成员         | 需要用 **类 * **来接收 | 不需要使用 *****   |
| 成员访问     | 通过 **.** 来访问      | 通过 **->** 来访问 |
| 使用场景     | 大型项目               | 中小项目           |
|              | 被多个模块使用         | 没有多个模块的调用 |

> - 如果类中是有属性的，所有的**属性所占空间大小的和** 就是 **对象的空间大小。**
> -  如果类中是没有属性的，对象所占的空间大小不是0Byte，**而是1Byte，用来表示对象已经创建成功了**。

##### 1.2.1.3 成员访问

```cpp
	// 成员访问 : (包括 属性、函数）
	// 情况一：没有使用new创建对象，在栈上开辟
	// 使用 ”对象.方法/属性 “
	xiaoming.age = 20;
	xiaoming.gender = "male";
	xiaoming.name = "xiaoming";
	xiaoming.score = 100;

	//情况二： 使用new创建对象，在堆上开辟
	// 1.使用 ”对象 -> 方法/属性“
	// 2.(*对象).方法/属性
	xiaoli->name = "xiaoli";
	xiaoli->age = 18;
	(*xiaoli).gender = "female";
	(*xiaoli).score = 99;
```

![](./C++_intermediate.assets/image-20240131171745313.png)

---



#### 1.2.2 类是一种自定义的数据类型

> A class is a C++ vehicle for translating an abstraction to a user-defined type.
>
> - 类是将抽象事务转换为用户定义类型的c++工具。

```cpp
#include <iostream>

using namespace std;

class Dog {
public:
	string name;
	int age;
};

class Person {
public:
	string name;
	int age;
	Dog pet;  // 等价于 Dog pet = Dog(); 以Dog作为Person的一个属性


	//在栈空间中创建一个对象指针，此时默认值为nullptr
	//需要注意空间问题
	Dog* otherPet;  

};

int main()
{
	//创建一个Person对象
	Person xiaoming;
	xiaoming.name = "xiaoming";
	xiaoming.age = 18;

	xiaoming.pet.name = "xiaobai";
	xiaoming.pet.age = 1;

	cout << xiaoming.name << endl;
	cout << xiaoming.pet.name << endl;

	//这里使用时，需要在堆空间上申请空间
	xiaoming.otherPet = new Dog();
	xiaoming.otherPet->name = "haha";
	xiaoming.otherPet->age = 2;

	cout << xiaoming.otherPet->name << endl;
	cout << xiaoming.otherPet->age << endl;

	system("pause");
	delete xiaoming.otherPet;

	return 0;
}
```

![image-20240131194539776](./C++_intermediate.assets/image-20240131194539776.png)

---

#### 1.2.3面向对象基础案例

##### 案例一

```cpp
#include <iostream>
using namespace std;

/*
面向对象基础案例：老师让学生做自我介绍

类：老师类、学生类
 
	学生：
		属性：名字、年龄、性别、成绩
		功能：自我介绍
	老师：
		属性：姓名
		功能：让学生做自我介绍
*/

class Student {
public:
	string name;
	int age;
	string gender;
	int score;

	void introduceSelf() {
		cout << "hello everyone, my name is " << name \
			<< ".  I'm " << age << " years old and a " << gender \
			<< ", my score is " << score << ", thanks." << endl;
	}
};

class Teacher{
public:
	string name;

	//让学生自我介绍，学生对象作为参数
	void makeIntroduce(Student s)
	{
		s.introduceSelf();
	}
};

int main()
{
	//创建学生对象
	Student xiaoming;
	xiaoming.age = 18;
	xiaoming.name = "xiaoming";
	xiaoming.gender = "boy";
	xiaoming.score = 90;

	//创建教师对象
	Teacher laowang;
	laowang.name = "laowang";

	//核心业务，老师让学生自我介绍
	laowang.makeIntroduce(xiaoming);

	return 0;
}
```

##### 案例二

<img src="./C++_intermediate.assets/image-20240201182358840.png" alt="image-20240201182358840" style="zoom:50%;" />

```cpp
#include <iostream>
using namespace std;

/*
面向对象基础案例二：判断一个圆是否包含一个点

类：圆、点

点类：
	属性：x，y
圆类
	属性：圆心、半径
	功能：判断是否包含一个点
*/

class Dot {
public:
	double x;
	double y;
};
class Circle {
public:
	Dot center;
	double radius;
	bool contain(Dot dot)
	{
		double dis = pow(center.x - dot.x, 2) + pow(center.y - dot.y, 2);
		//比较距离
		return dis <= pow(radius, 2);
	}
};
int main()
{
	Circle cir;
	Dot dot;
	cir.center.x = 0;
	cir.center.y = 0;
	cir.radius = 3;

	dot.x = 1;
	dot.y = 4;

	//核心业务，判断是否包含某个点
	cout <<  cir.contain(dot) << endl;

	return 0;
}
```

---

#### 1.2.4 在类外和其他文件中实现类函数

> - `.h`文件，一般是对外暴露、提供==公共函数==
> - `.cpp`文件，==公共 函数==的实现、==私有函数的定义==

---

### 1.3 静态 static

在类中定义成员的时候（函数、属性），可以用关键字`static`来修饰，表示静态成员**【静态属性、静态函数】**

#### 1.3.1 静态属性

> - 静态的属性内存是开辟在**全局区**的，==与对象无关,不隶属于对象，而是被**所有对象所共享的**==，在**程序编译的时候**就完成了==空间的开辟==与==初始化操作==；生命周期为程序运行期间。
> - 如果希望某个属性是可以被所有对象所共享，则可以设置为静态属性。

#### 1.3.2 如何创建和初始化

> **Tip:**
>
> 1. 在类中定义的==静态变量成员==，必须在类内定义，在类外初始化赋值
>
> ```cpp
> class MyNumber {
> public:
> 	//在类中定义的静态成员，必须在类内定义，在类外初始化赋值
> 	static int a;
> };
> //在类外对静态成员，进行赋值
> //存储类型 类::静态成员 = 值
> int MyNumber::a = 100;
> ```
>
> ---
>
> 2. **如果**是**==静态整形常量成员==**【short,char,int,long,long long, bool 等】
>
>    ​	或者是==静态函数成员== ,==允许在定义的时候初始化赋值== 
>
>    **否则**，==任然需要在类外定义==。
>
> ```cpp
> class MyNumber {
> public:
> 	//如果是静态整形常量 【short,char,int,long,long long, bool 等】
> 	const static int PI = 1;
>     //静态函数成员
> 	static void show()
> 	{
> 		cout << "类中的静态函数调用了" << endl;
> 	}
>     // 允许在定义的时候初始化赋值 
>     
> 	// 否则，任然需要在类外定义
> 	const static float Exp;
> };
> 
> //在类外对静态成员，进行赋值
> 
> //限定符 存储类型 类::静态常量浮点型  = 值
> const float MyNumber::Exp = 0.001;
> ```

#### 1.3.3 如何访问静态成员

> 1. 使用==对象==来访问
>
> ```cpp
> 	//用对象来访问
> 	MyNumber number1;
> 	MyNumber number2;
> 
> 	cout << number1.a << endl;
> 	cout << number2.a << endl;
> 	cout << number1.Exp << endl;
> ```
>
> 2. 使用==类==来访问【推荐】
>
> ```cpp
> 	//类来访问
> 	cout << MyNumber::a << endl;
> ```
>
> 3. 访问==静态函数==成员
>
> ```cpp
> 	//调用类中静态函数成员
> 	//方法一：
> 	MyNumber::show();  //【推荐】
> 	//方法二：
> 	number1.show();
> ```

#### 1.3.5 总结：

> - ==所有类共享 -> 设置静态==
> - ==某个类特有 -> 设置非静态==
> - 静态函数 ： 一般用来作工具类，直接使用，方便快捷。
> - 大多数情况下，都还是设置非静态的。

### 1.4 构造与析构

- 对象的生命周期

- 构造： 对象生命周期==开始==的地方
- 析构：对象生命==结束==的地方

#### 1.4.1  构造函数

> 特殊的函数，在使用类的对象时，要为其分配空间，然后对创建的属性进行==初始化赋值==，这个过程就在**构造函数中完成**。

#### 1.4.1.2 构造函数的定义

> - 构造函数的名字，==必须和类的名字相同！==
> - 构造函数==不能写返回值类型！！==
> - 构造函数可以有==不同的重载！！！==

