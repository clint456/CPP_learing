//#include <iostream>
//
//using namespace std;
//
//class A{};
//
//class MyNumber {
//public:
//	//�����ж���ľ�̬������Ա�����������ڶ��壬�������ʼ����ֵ
//	static int a;
//
//	//���----�Ǿ�̬������������������ ���� ��short,char,int,long,long long, bool �ȡ�
//	// �����ڶ����ʱ���ʼ����ֵ 
//	const static int PI = 1;
//
//	// ����----��Ȼ��Ҫ�����ⶨ��
//	const static float Exp;
//
//	static void show()
//	{
//		cout << "���еľ�̬����������" << endl;
//	}
//
//
//};
//
////������Ծ�̬��Ա�����и�ֵ
//// 
////�洢���� ��::��̬���� = ֵ
//int MyNumber::a = 100;
////�޶��� �洢���� ��::��̬����  = ֵ
//const float MyNumber::Exp = 0.001;
//
//
//int main()
//{
//	//�ö���������
//	MyNumber number1;
//	MyNumber number2;
//
//	cout << number1.a << endl;
//	cout << number2.a << endl;
//	cout << number1.Exp << endl;
//	number1.a = 200;
//	//��������
//	cout << MyNumber::a << endl;
//
//	//�������о�̬������Ա
//	MyNumber::show();
//	number1.show();
//	return 0;
//}