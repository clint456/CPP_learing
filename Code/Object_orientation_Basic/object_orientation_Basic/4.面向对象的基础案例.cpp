//#include <iostream>
//using namespace std;
//
///*
//�������������������ж�һ��Բ�Ƿ����һ����
//
//�ࣺԲ����
//
//���ࣺ
//	���ԣ�x��y
//Բ��
//	���ԣ�Բ�ġ��뾶
//	���ܣ��ж��Ƿ����һ����
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
//			cout << "����Բ�ڣ���Բ�ĵľ���Ϊ: " << length << endl;
//		}
//		else {
//			cout << "�㲻��ԭ�ͣ�Բ�ĵľ���Ϊ: " << length << endl;
//		}
//	}
//
//	bool contain(Dot dot)
//	{
//		double dis = pow(center.x - dot.x, 2) + pow(center.y - dot.y, 2);
//		//�ȽϾ���
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
////	//����ҵ���ж��Ƿ����ĳ����
////	cout <<  cir.contain(dot) << endl;
////
////	return 0;
////}