#include <iostream>

void DoSomething(int array[3])
{
	array[0] = 0;		  // {0, 2, 3} 으로 바뀐다
}
/*
	void DoSomething(int* array)도 가능하다
	그러나, (int array[3]), (int* array) 같은 형태는
	배열의 정확한 크기를 알 수 없는 것이 단점이다
*/


int main()
{
	int array[3]{ 1, 2, 3 };

	DoSomething(array);   //  &array[0] 가 넘어간다

	std::cout << array[0] << std::endl;

	// call by reference (배열 자체가 포인터이므로)
}