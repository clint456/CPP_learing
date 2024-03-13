#include <iostream>
using namespace std;

class Person {
public:
    //无参构造函数
    explicit Person() {
        cout << "无参构造函数执行了" << endl;
    }
    //有参构造函数
    Person(int age){
        cout << "带age参数的构造函数执行了，age:" << age << endl;
    }
    //重载构造函数
    Person(int age, int score) {
        cout << "带age、socre的重载构造函数执行了，age：" << age << "score: " << score << endl;
    } 
};



//int main()
//{
//    //构造函数的调用：创建对象的时候调用
//
//// --------显式调用
// /*   Person xiaoming = Person();
//    Person xiaobai = Person(20);
//    Person xiaoli = Person(20, 99);*/
//
//    /*Person xiaoming;
//    Person xiaobai(20);
//    Person xiaoli(20, 99);*/
//
//// --------隐式调用
//    //// 无参
//    //Person xiaoli = {};
//    ////有一个参
//    //Person xiaoming = 10; //如果，大括号中只有一个参数，可以不写大括号
//    ////有两个参
//    //Person xiaobai = { 10,20 };
//
//// -------- 显式调用之堆创建
//    Person* xiaoming = new Person();
//    Person* xiaoli = new Person(10);
//    Person* xiaobai = new Person(10, 20);
//    return 0;
//}

