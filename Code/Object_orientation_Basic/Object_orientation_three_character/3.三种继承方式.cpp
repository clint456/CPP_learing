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
		//无访问权限 cout << privateField << endl;
	}
	};
class SubClass2 : protected BaseClass { 
	void test02() {
		cout << publicField << endl;
		cout << protectedField << endl;
		//无访问权限 cout << privateField << endl;
	}
};
class SubClass3 : private BaseClass{
	void test03() {
		cout << publicField << endl;
		cout << protectedField << endl;
		//无访问权限 cout << privateField << endl;
	}
};


int main() {
	SubClass1 *s1 = new SubClass1;
	//s1 能访问public属性
	cout << s1->publicField << endl;
	
	SubClass2 s2;
	//s2 中public属性变成protected
	// 无访问权限 cout << s2->publicField << endl;

	SubClass3 s3;
	//s2 中所有属性变成private
}