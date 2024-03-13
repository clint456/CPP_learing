#include <iostream>

using namespace std;

class BaseClass {
public:
	int publicField;
protected:
	int protectedField;
private:
	int privateField;
};


class SubClass1 : public BaseClass{ 
	void test01() {
		cout << publicField << endl;
		cout << protectedField << endl;
		//�޷���Ȩ�� cout << privateField << endl;
	}
	};
class SubClass2 : protected BaseClass { 
	void test02() {
		cout << publicField << endl;
		cout << protectedField << endl;
		//�޷���Ȩ�� cout << privateField << endl;
	}
};
class SubClass3 : private BaseClass{
	void test03() {
		cout << publicField << endl;
		cout << protectedField << endl;
		//�޷���Ȩ�� cout << privateField << endl;
	}
};


int main() {
	SubClass1 *s1 = new SubClass1;
	//s1 �ܷ���public����
	cout << s1->publicField << endl;
	
	SubClass2 s2;
	//s2 ��public���Ա��protected
	// �޷���Ȩ�� cout << s2->publicField << endl;

	SubClass3 s3;
	//s2 ���������Ա��private
}