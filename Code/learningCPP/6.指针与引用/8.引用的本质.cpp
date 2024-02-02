#include <iostream>

using namespace std;

int main()
{
	int n = 10;

	int* const rn_1 = &n;
	//上面操作相当于 
	int& rn_2 = n;


	//在通过引用访问空间时，系统会自动转换成 rn = 20 ==> *rn = 20
	*rn_1 = 20;
	rn_2 = 20;

	cout << rn_1 << endl;
	cout << &rn_2 << endl;
}