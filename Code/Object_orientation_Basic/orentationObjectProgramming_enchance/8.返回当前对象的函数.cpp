#include <iostream>

using namespace std;

//this:��ƺ��������ض�����

class MyNumber {
private:
	int n;

public:
	MyNumber():n(0){ }
	MyNumber(int n):n(n){ }

	//��ӹ���
	void display() {
		cout << n << endl;
	}

	//���һ���������ۼ���һ�����֣����ض�����
	//����ֵ���������Լ�
	//���
	MyNumber& add(int n) {
		this->n += n;
		//thisװ�صĵ�ַ�Ƕ�����׵�ַ
		return *this;
	}
	//�ۼ�
	MyNumber& minus(int n) {
		this->n -= n;
		return *this;
	}
};


//int main()
//{
//	MyNumber n;
//	//�����ĵ��÷��ؾ���n�Լ������Կ���һֱ����
//	n.add(10).add(1).minus(6).add(1).display();
//
//	return 0;
//}