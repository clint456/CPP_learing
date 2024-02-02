#include <iostream>

using namespace std;

int main()
{
	int array[] = { 0,1,2,3,4,5,6,7,8,9 };

	//浅拷贝、地址拷贝
	int* array_copy_1 = array;

	//深拷贝，创建一个新的等长的数组，将元素依次拷贝过来
	
	int array_deepcopy[10];
	for (int i=0; i < (sizeof(array) / sizeof(int)); i++)
	{
		array_deepcopy[i] = array[i];
		cout << array_deepcopy[i] << " ";
	}
	cout << endl;
	return 0;
}