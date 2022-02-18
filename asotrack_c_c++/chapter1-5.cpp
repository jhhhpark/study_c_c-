#include <cstdio>

int chapter1_5()
{
	//[2강]
	// 주석 : 설명
	// int i; // i는 변수명
	// int : 자료형 -키워드, 예약어로 되어있다.
	// 자료형 : 실수, 정수

	/* (자료형, byte)
	* [정수형 자료형]
	* char(1)
	* short(2)
	* int(4)
	* long(4)
	* long long(8)
	* [실수형 자료형]
	*
	* float(4)
	* double(8)
	*/

	/*
	* 1Kbyte = 1024byte
	* 1Mbyte = 1024Kbyte
	* 1Gbyte = 1024Mbyte
	* 1Tbyte = 1024Gbyte
	* 1Pbyte = 1024Tbyte
	*/

	/*
	* 1byte 크기로 표현가능 범위
	* unsigned : 0 ~ 255
	* signed : -128 ~ 127
	*/

	/*
	* = : 대입연산자
	* == : 비교연산자
	*/



	//[3강]
	/*
	* signed와 unsigned를 구분하는 것은
	* 동일한 값을 저장하더라도
	* 선언한 자료형에 따라
	* 다르게 해석된다.
	* ex)
	* unsigned char c = 255; => 255
	* signed char c2 = 255; => -1
	*/

	/*
	* 2의 보수법
	* 1. 현재 비트를 전부 반전 시킨다.
	* 2. 1을 더해준다.(hidden bit)
	*/
	
	/*
	* 실수
	* 부동소수점 표기
	* 1. 이진수로 표현
	* 2. 정규화
	* 3. 지수와 가수를 구함
	* 4. 지수 + bias를 구하여 이진수로 표현
	* 
	* 실수 표현 시
	* 0.1을 원했지만 근사값이 나올 수 있기에
	* 이부분을 꼭 유념 할 것
	* 
	* 정수표현 방식과 실수 표현 방식이 다르다
	* 정수 표현방식보다 정밀도에 의존한다.
	* double의 정밀도가 float 정밀도보다 높다
	* 
	* 암시적(암묵적) 형변환 보다는
	* 명시적 형변환을 하자.
	*/
	float implicitF = 20.0f + (float)4;

	/*
	* 산술연산자
	* +, -, *, /, %
	* 
	* 대입연산자
	* =
	* 
	* 비교연산자
	* ==, <=, >=, <, >
	* 
	* 복합연산자
	* += -= *= /= %=
	* 
	* 실제로 연산을 할 때
	* cpu는 레지스터에 임시 결과를 저장한다.
	*/

	/*
	* 실수 연산 시 나머지는 존재하지 않는다.
	* (오류남)
	* 정수 연산 시 나머지는 존재한다.
	* 
	* ※ 다시 한번 말하지만 실수와 정수를 혼합해서 사용하지 말것!!
	*/
	//int warningDiv = 10.1 / 3; // warning
	int div = (int)10.1 / 3;
	int div2 = (int)(10.1 / 3);

	// 실수 자료형 변수 선언 시 f를 붙이면 float 않붙이면 double

	return 0;
}