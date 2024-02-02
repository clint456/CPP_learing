#include <iostream>

using namespace std;

void change(int* p) {
	cout << "num:" << *p << endl;
	cout << "inside:" << p << endl;
}
//int main()
//{
//	int a = 10;
//	change(&a);
//	cout << "outside:" << &a << endl;
//	return 0;
//}