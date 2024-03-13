#include <iostream>

using namespace std;

//将成员函数做友元

//提前声明此类
class Home;

class GoodFriend {
public:
	//要将Home类的声明 要在前，后面需要用到	
	Home *home;
	void visitBedRoom();
};


class Home {
	//将GoodFriend中的成员函数声明为友元函数
	friend void GoodFriend::visitBedRoom();

public:
	string livingRoom = "客厅";

private:
	string bedRoom = "卧室";
};

//外部实现是为了能够访问Home类中后面声明出来的属性
void GoodFriend::visitBedRoom() {
	//访问public成员
	cout << home->livingRoom << endl;
	cout << home->bedRoom << endl;
}


//int main() {
//	////栈空间开辟home
//	//Home home;
//	//堆空间上开辟home
//	Home *home = new Home();
//	GoodFriend *goodfriend = new GoodFriend();
//	//将外部开辟的home赋值给goodfriend中的home
//	//goodfriend->home = &home;
//	goodfriend->home = home;
//	goodfriend->visitBedRoom();
//	return 0;
//}