#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	////方式一：直接赋值
	////无参构造函数
	//Person() {
	//	name = "";
	//	age = 0;  
	//	gender = "";
	//	score = 0;
	//}

	//Person(string n,int a, string g,int s) {
	//	name = n;
	//	age = a;
	//	gender = g;
	//	score = s;
	//}

	//方式二：构造函数列表
	//无参
	Person() : name(" "),age(0),gender(" "),score(0){}
	//有参
	Person(string n,int a, string g,int s):name(n),age(a),gender(g),score(s){ }
	Person(string name,int age,string gender):name(name),age(age),gender(gender){ }
	


};

//int main()
//{
//	Person xiaoli;
//	Person xiaobai("xiaobai",19,"male",99);
//
//	cout << xiaoli.name << " " << xiaoli.age << " " << xiaoli.gender << " " << xiaoli.score << endl;
//	cout << xiaobai.name << " " << xiaobai.age << " " << xiaobai.gender << " " << xiaobai.score << endl;
//}