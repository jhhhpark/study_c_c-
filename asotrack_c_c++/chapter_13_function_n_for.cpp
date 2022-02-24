#include <stdio.h>

int Add(int a, int b)
{
	return a + b;
}


// 함수
int main()
{
	int iData = Add(100, 200);

	// 반복문
	for (/* 반복자 초기화 */; /* 반복자 조건 체크*/; /* 반복자 변경 */)
	{
		break;
	}

	int j = 0;
	while (j < 10)
	{
		++j;
	}

	/*
	* 문제!
	* 1. 별찍기 (for문)
	* *****
	* ****
	* ***
	* **
	* *
	* 2) (while 문)
	* *****
	*  ****
	*   ***
	*    **
	*     *
	* 3) 모래시계 (알아서)
	* ***********
	*  *********
	*   *******
	*    *****
	*     ***
	*      *
	*     ***
	*    *****
	*   *******
	*  *********
	* ***********
	*/
	// continue : 반복문 1회 패스
	// break : 반복문 종료

	for (int i = 0; i < 10; ++i)
	{
		printf("%d.Output Test\n", i+1);
	}

	return 0;
}