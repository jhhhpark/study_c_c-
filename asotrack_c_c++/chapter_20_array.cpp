#include <cstdio>

int main()
{
	// 배열!!
	int array[10] = { 0 };
	int nValue = 10;
	// 배열의 요소는 인덱스를 통해 접근한다.
	// 특징
	// 랜덤 엑세스가 가능하다.
	// 메모리에 연속적으로 할당된다.
	array[9] = 20;
	printf("%d\n", array[9]);
}