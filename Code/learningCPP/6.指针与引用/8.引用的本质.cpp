#include <iostream>

using namespace std;

int main()
{
	int n = 10;

	int* const rn_1 = &n;
	//��������൱�� 
	int& rn_2 = n;


	//��ͨ�����÷��ʿռ�ʱ��ϵͳ���Զ�ת���� rn = 20 ==> *rn = 20
	*rn_1 = 20;
	rn_2 = 20;

	cout << rn_1 << endl;
	cout << &rn_2 << endl;
}