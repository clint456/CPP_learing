#include <iostream>

using namespace std;

//��ȫ�ֺ�������Ԫ
class Home {

	//��һ��ȫ�ֺ�������Ϊ��Ԫ����
	//����Ҫ����������
	friend void gotoBedRoom(Home* home);

public:
	string livingRoom = "����";

private:
	string bedRoom = "����";
};

void gotoBedRoom(Home* home)
{
	//���Է���public����
	cout << home->livingRoom << endl;

	//����private����
	cout << home->bedRoom << endl;
}

//int main()
//{
//	Home home;
//	gotoBedRoom(&home);
//	return 0;
//}