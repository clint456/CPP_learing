#include <iostream>

using namespace std;
//新的数据类型类
class Point {
public:
	int x;
	int y;

	//构造函数
	Point() :x(0), y(0) {}
	Point(int x, int y) :x(x), y(y) {}

	//一元运算符的参数用this代替
	//--i
	Point operator--() {
		x--;
		y--;

		//返回这个类的值
		return *this;
	}

	//i--
	Point operator--(int) {
		Point tmp = *this; 
		x--;
		y--;
		return tmp;
	}
};


//int main() {
//	Point x(1, 2);
//	Point y = --x;
//	cout << y.x <<","<<y.y<<endl;
//	return 0;
//}

