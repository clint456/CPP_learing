#include <iostream>

using namespace std;
//�µ�����������
class Point {
public:
	int x;
	int y;

	//���캯��
	Point() :x(0), y(0) {}
	Point(int x, int y) :x(x), y(y) {}

	//һԪ������Ĳ�����this����
	//--i
	Point operator--() {
		x--;
		y--;

		//����������ֵ
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

