#include <iostream>

using namespace std;

class Home {
	//���������Ԫ
	friend class Friend;
public:
	string livingRoom = "����";
private:
	string bedRoom = "����";
};

class Friend {
	
public:
	//���������õ���
	Home* home;

	void gotoLivingRoom() {
		cout << "����" << home->livingRoom << endl;
	}
	void gotoBedRoom() {
		cout << "����" << home->bedRoom << endl;
	}
};

//int main() {
//	//������
//	Home* home = new Home();
//	Friend *friend1 = new Friend();
//	//��ֵ��
//	friend1->home = home;
//	//���ʷ���
//	friend1->gotoBedRoom();
//	friend1->gotoLivingRoom();
//	return 0;
//}