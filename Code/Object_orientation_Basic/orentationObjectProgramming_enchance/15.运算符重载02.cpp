//#include <iostream>
//
//using namespace std;
//
//class Person {
//private:
//	string name;
//	int age;
//	string gender;
//	int* score;
//
//public:
//	friend ostream& operator<<(ostream& os, const Person& p);
//	Person():name(""),age(0),gender(""),score(nullptr) {}
//	//int *p = new int(10);// p指向一个值为10的int数。
//	Person(string name,int age,string gender,int score) : name(name), age(age), gender(gender), score(new int(score)) {}
//};
//
////运算符重载 <<
//ostream & operator<<(ostream &os,const Person &p) {
//	//字符串拼接
//	os << "name=" << p.name << ", age= " << p.age << ", gender=" << p.gender << ", score= " << *p.score;
//	return os;
//}



//int main()
//{
//	Person xiaoming("xiaoming", 18, "male", 99);
//	cout << xiaoming << endl;
//}