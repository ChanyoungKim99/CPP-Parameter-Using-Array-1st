#include <iostream>

void DoSomething(int array[3])
{
	array[0] = 0;		  // {0, 2, 3} ���� �ٲ��
}
/*
	void DoSomething(int* array)�� �����ϴ�
	�׷���, (int array[3]), (int* array) ���� ���´�
	�迭�� ��Ȯ�� ũ�⸦ �� �� ���� ���� �����̴�
*/


int main()
{
	int array[3]{ 1, 2, 3 };

	DoSomething(array);   //  &array[0] �� �Ѿ��

	std::cout << array[0] << std::endl;

	// call by reference (�迭 ��ü�� �������̹Ƿ�)
}