#include <stdio.h>
int chapter_15()
{
	// #include 해당 파일을 미리 포함(전처리기)
	
	// stdio.h파일에 있는 함수들
	// printf() 콘솔 출력 함수 
	printf("abcdef\n"); // 해당 문자열을 콘솔에 출력하고, 커서를 다음 위치로 이동시킴.
	
	printf("%d\n",65); // 10을 출력해줌. 형식 포맷 decimal
	
	printf("%c\n", 65); // character
	
	printf("%f\n", 3.14); // float
	printf("%lf\n", 3.14); // long float

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d\n", i);
	}
	
	// scanf() 콘솔 입력 함수
	int n1 = 0;
	int n2 = 0;
	scanf_s("%d%d", &n1, &n2);
	printf("n1 = %d, n2 = %d\n", n1, n2);

	// 입력이 씹혔다!!!!!!!
	char c1;
	scanf_s("%c", &c1);
	// 으잉? 
	printf("c1 = %c\n", c1);

	/*
	* 왜 결과가/....?
	* n1 = 10, n2 = 20,
	* c1 =
	* 
	*/



	/* 문제 : 자기소개를 해보자
	* 1. 각 타입에 맞게 name, age, job, school, dream을 콘솔에 입력해보자.
	* 2. 입력한 정보 중 나이가 잘못된것 같다.
	* 10 30 50 70 90 110 을 입력해서 가장 가까운 수만을 출력해보자.
	*/

	return 0;
}