#include <iostream>

using namespace std;

int main6()
{
	//����һ�����͵ı���
	int num = 10;
	//����һ�����ã����õ�num
	int& a = num;

	//�Ƚ�ֵ
	cout << "num = " << num << ",a = " << a << endl;

	//�Ƚϵ�ַ
	cout << "&num = " << &num << ", &a = " << &a << endl;
	return 0;
} 