#include <iostream>

//使用引用，对形参的修改，会影响实参
void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}
