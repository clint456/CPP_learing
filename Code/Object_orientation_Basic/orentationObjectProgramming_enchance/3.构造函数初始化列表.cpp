#include <iostream>

using namespace std;

class Person {
public:
	string name;
	int age;
	string gender;
	int score;

	////��ʽһ��ֱ�Ӹ�ֵ
	////�޲ι��캯��
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

	//��ʽ�������캯���б�
	//�޲�
	Person() : name(" "),age(0),gender(" "),score(0){}
	//�в�
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