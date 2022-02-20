#include <stdio.h>


// 더하기 함수
int add(int a, int b)
{
	int sum; // 지역 변수
	sum = a + b;
	{
		int i = 1;
		int j = 2;
		// 이런식으로 함수안에 또 다른 지역을 만들어줄 수 있다.
	}
	return sum;
}

// 전역 변수
int global = 0;


// 메인 함수
int main()
{
	/*
	* 문제) 함수 4개를 만들어보자.
	* 1) 반환값이 1, 2, 0, 6을 반환하는 함수를 만들어 보아라.
	* 2) 더하기 뺴기 곱하기 나누기를 하는 함수를 만들어 보자.
	* 반환타입 : int, 파라미터 2개 (int, int)
	*/

	// 지역 변수
	// 함수 안에 선언된 변수
	

	// 정적 변수


	// 외부 변수


	// 함수 function(기능)
	int data = 10 + 20;
	data = add(10, 20);

	{
		// naming 규칙
		// 이미 동일한 이름이 존재하는데 똑같은 이름의 변수를 만들 수 있을까? yes
		// 지역변수가 그 상위 지역 혹은 전역변수보다 우선순위가 높다.
		// 지역을 생성하면 가능하다. 그런데 이런 방식은 좋지 않다.

		int global = 10;
		printf("지역 안의 지역변수 global = %d\n", global);

		int data = 1000;
		printf("지역 안의 지역변수 data = %d\n", data);

		
	}

	printf("전역변수 global = %d\n", global);

	printf("지역변수 data = %d\n", data);


	
}