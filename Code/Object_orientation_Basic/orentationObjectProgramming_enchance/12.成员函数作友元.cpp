#include <iostream>

using namespace std;

//����Ա��������Ԫ

//��ǰ��������
class Home;

class GoodFriend {
public:
	//Ҫ��Home������� Ҫ��ǰ��������Ҫ�õ�	
	Home *home;
	void visitBedRoom();
};


class Home {
	//��GoodFriend�еĳ�Ա��������Ϊ��Ԫ����
	friend void GoodFriend::visitBedRoom();

public:
	string livingRoom = "����";

private:
	string bedRoom = "����";
};

//�ⲿʵ����Ϊ���ܹ�����Home���к�����������������
void GoodFriend::visitBedRoom() {
	//����public��Ա
	cout << home->livingRoom << endl;
	cout << home->bedRoom << endl;
}


//int main() {
//	////ջ�ռ俪��home
//	//Home home;
//	//�ѿռ��Ͽ���home
//	Home *home = new Home();
//	GoodFriend *goodfriend = new GoodFriend();
//	//���ⲿ���ٵ�home��ֵ��goodfriend�е�home
//	//goodfriend->home = &home;
//	goodfriend->home = home;
//	goodfriend->visitBedRoom();
//	return 0;
//}