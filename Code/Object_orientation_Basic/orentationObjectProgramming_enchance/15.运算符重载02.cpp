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
//	//int *p = new int(10);// pָ��һ��ֵΪ10��int����
//	Person(string name,int age,string gender,int score) : name(name), age(age), gender(gender), score(new int(score)) {}
//};
//
////��������� <<
//ostream & operator<<(ostream &os,const Person &p) {
//	//�ַ���ƴ��
//	os << "name=" << p.name << ", age= " << p.age << ", gender=" << p.gender << ", score= " << *p.score;
//	return os;
//}



//int main()
//{
//	Person xiaoming("xiaoming", 18, "male", 99);
//	cout << xiaoming << endl;
//}