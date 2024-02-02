//#include <iostream>
//using namespace std;
//
///*
//面向对象基础案例二：判断一个圆是否包含一个点
//
//类：圆、点
//
//点类：
//	属性：x，y
//圆类
//	属性：圆心、半径
//	功能：判断是否包含一个点
//*/
//
//class Dot {
//public:
//	double x;
//	double y;
//};
//class Circle {
//public:
//	Dot center;
//	double radius;
//
//	void isContainDot(Dot dot) {
//		double length = sqrt(pow(center.x - dot.x, 2) + pow(center.y - dot.y, 2));
//		if (length <= radius){
//			cout << "点在圆内，到圆心的距离为: " << length << endl;
//		}
//		else {
//			cout << "点不在原型，圆心的距离为: " << length << endl;
//		}
//	}
//
//	bool contain(Dot dot)
//	{
//		double dis = pow(center.x - dot.x, 2) + pow(center.y - dot.y, 2);
//		//比较距离
//		return dis <= pow(radius, 2);
//	}
//};
////int main()
////{
////	Circle cir;
////	Dot dot;
////	cir.center.x = 0;
////	cir.center.y = 0;
////	cir.radius = 3;
////
////	dot.x = 1;
////	dot.y = 4;
////
////	cir.isContainDot(dot);
////
////	//核心业务，判断是否包含某个点
////	cout <<  cir.contain(dot) << endl;
////
////	return 0;
////}