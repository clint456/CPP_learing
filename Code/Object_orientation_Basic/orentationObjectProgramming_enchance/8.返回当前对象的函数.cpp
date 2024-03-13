#include <iostream>

using namespace std;

//this:设计函数，返回对象本身

class MyNumber {
private:
	int n;

public:
	MyNumber():n(0){ }
	MyNumber(int n):n(n){ }

	//添加功能
	void display() {
		cout << n << endl;
	}

	//设计一个函数，累加上一个数字，返回对象本身
	//返回值：引用类自己
	//如果
	MyNumber& add(int n) {
		this->n += n;
		//this装载的地址是对象的首地址
		return *this;
	}
	//累减
	MyNumber& minus(int n) {
		this->n -= n;
		return *this;
	}
};


//int main()
//{
//	MyNumber n;
//	//函数的调用返回就是n自己，所以可以一直调用
//	n.add(10).add(1).minus(6).add(1).display();
//
//	return 0;
//}