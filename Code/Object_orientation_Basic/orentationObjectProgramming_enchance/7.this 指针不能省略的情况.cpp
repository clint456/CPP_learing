//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int age;
//
//	//���캯��
//	Person() :age(0) { }
//	Person(int age) {
//		//��������˾ֲ�����������ͬ�������
//		//ֱ��ʹ�����ַ��ʣ��Ǿֲ�����
//		//��Ҫ��������age���Ǿͱ���ʹ��this->����ʽ����
//		this->age = age;
//	}
//
//	int getAge() {
//		return this->age;
//	}
//};
//
//int main()
//{
//	Person xiaoming(10);
//	cout << xiaoming.getAge() << endl;
//
//	Person xiaobai(20);
//	cout << xiaobai.getAge() << endl;
//	  
//	return 0;
//}