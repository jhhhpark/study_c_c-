#include <stdio.h>

// # 전처리기를 가장 먼저 수행한다.
	// #define 전처리기 : 내가 지정한 구문을 특정 숫자로 치환해준다.
	// 매크로로 많이 사용함.
// 1. 가독성, 2. 유지보수
#define HUNGRY 1
#define THIRSTY 2
#define SLEEP 4

#define MAX_SIZE 20

int main()
{
	// 비트연산자 
	// shift : >> <<
	// 논리 : | & ^ ~

	int a = 10;
	a <<= 1; // 곱하기 2, a = a << 1;
	printf("오른쪽 << 1 : shift : %d\n", a);

	a = 10;
	a <<= 2;
	printf("오른쪽 << 2 : shift : %d\n", a);

	a = 10;
	a <<= 3;
	printf("오른쪽 << 3 : shift : %d\n", a);

	a = 10;
	a >>= 1; // 나누기 2 a = a >> 1;
	printf("오른쪽 >> 1 : shift : %d\n", a);

	a = 10;
	a >>= 2;
	printf("오른쪽 >> 2 : shift : %d\n", a);

	a = 10;
	a >>= 3;
	printf("오른쪽 >> 3 : shift : %d\n", a);

	a = 10;
	a >>= 4; // 0이 된다~ 비트가 전부 소실됬음 
	printf("오른쪽 >> 4 : shift : %d\n", a);


	// 비트 곱, 비트 합
	char c = 10;
	printf("-1곱셈 : %d\n", c * -1);
	printf("2의 보수 : %d\n", ~c + 1);



	// 2의 보수
	c = ~c + 1; // 1의 보수나 마찬가지므로 여기에 1을 더하면 2의 보수를 취한것과 동일하다. :: -10
	printf("%d\n", c);

	int d; 
	// 짝수 + 짝수 = 짝수
	// 짝수 + 홀수 = 홀수
	// 
	// 0000_0001 : 1
	// 0000_0010 : 2
	// 0000_0011 : 3
	// 0000_0100 : 4
	// 0000_1000 : 8

	// d : 9  0000_1001
	// d : 10 0000_1010
	//	   1  0000_0001
	//	   &  0000_0000
	

	// printf() 인자를 여러개 받을 수 있는데 
	// 첫번째 인자로 형식포맷문자열
	// 문자열 " "
	// 포맷 : 어떤 특정한 출력 방식을 보여줌
	// 형식 : 
	// %c : 문자
	// %d : 십진수
	// %u : 부호가 없는 정수
	unsigned char cc = 'a'; // 0000_1010 2^8-1
	// 1111_1111

	//   0000_1010 : 10
	//   1111_0101 : -11
	// | 1111_1111 : 255
	printf("%u\n", (unsigned char)(cc | ~cc));

	int n = 0;
	n % 2 == 1; // 홀수 체크
	(n & 1) == 1; // 홀수 체크

	// 짝수, 홀수 성질
	// 자연수
	// 짝수 : 모든 자연수에 2를 곱하면 짝수가 됨., 2로 나눴을 때 나머지가 0이란소리임. 2n
	// 홀수 : 모든 짝수에 1을 더하면 홀수가 됨. 혹은 1을 뺴면, 홀수가 됨.
	// 짝수 + 짝수 = 짝수
	// 홀수 + 홀수 = 짝수
	// 짝수 + 홀수 = 홀수, 홀수 = 짝수 + 1; => 짝수 + 짝수 + 1 = 홀수

	//   1010_1111
	//   0101_0000
	// | 1111_1111
	unsigned int nMax = 11;
	nMax = (nMax | ~nMax);
	printf("%u\n", nMax); // 최댓값

	/*
	* 문제 : 1) 특정 숫자가 주어졌을 떄 해당 자료형의 최댓값을 콘솔에 출력해보자. (char, short, int)
	* 2) 특정 숫자가 주어졌을 때 해당 값의 반전 값을 콘솔에 출력해보자.
	* 3) 특정 숫자가 주어졌을 때 해당 값이 홀수인지 짝수인지 비트 연산을 통해 알아보자.
	hint : unsigned 형태로 콘솔에 출력하고 싶다면 %u를 사용
	*/


	// 전처리기 사용하기!!
	printf("%d\n", HUNGRY);

	int iStatus = HUNGRY;
	// 이렇게 하면 HUNGRY에 해당하는 값을 찾아서 iStatus에 값을 복사해서 저장한다.
	//HUNGRY = 2; // 이런거 안됨.!!!!! 이미 전처리로 처리했으므로 값 수정이 되지 않음.
	// 근대 잘 생각해보면 당연함. 왜? HUNGRY는 뷜드 할 때 HUNGRY가 1로 이미 저장했으므로!!!!
	
	// #define을 사용하면 장점은???
	// 가독성이 좋다!! HUNGRY는 1이므로
	printf("%d\n", iStatus);

	/*
	* 문제 :1) 헬렝이는 1, 2, 4, 8, 16, 32, 64 에 따라 일요일, 화요일, 수요일 ... 토요일까지
	* 콘솔에 요일을 출력하는 프로그램을 만들어라.
	* 
	* 2) 대표님이 헬렝이한테 순서가 바뀌었어!! 64, 32, 16, 8, 4, 2, 1순으로 
	* 일요일~토요일 까지 콘솔(화면)에 요일을 출력하는 프로그램으로 바꿔줘라고 했다.
	* 수정해보자!
	* 
	* 입력은 아직 안배웠으니 일단 n이라는 값에 1, 2, 4, 8, 16, 32, 64가 들어간다고 가정한다.
	* hint : #define을 사용하자
	*/




}

