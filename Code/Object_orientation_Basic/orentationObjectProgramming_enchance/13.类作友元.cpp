#include <iostream>

using namespace std;

class Home {
	//声明类的友元
	friend class Friend;
public:
	string livingRoom = "客厅";
private:
	string bedRoom = "卧室";
};

class Friend {
	
public:
	//声明所调用的类
	Home* home;

	void gotoLivingRoom() {
		cout << "访问" << home->livingRoom << endl;
	}
	void gotoBedRoom() {
		cout << "访问" << home->bedRoom << endl;
	}
};

//int main() {
//	//创建堆
//	Home* home = new Home();
//	Friend *friend1 = new Friend();
//	//赋值类
//	friend1->home = home;
//	//访问方法
//	friend1->gotoBedRoom();
//	friend1->gotoLivingRoom();
//	return 0;
//}