#include <cstdio>
int chapter_7_9()
{
	// 논리 연산자
	// 참 거짓
	// !(not), &&(and), ||(or)
	// 참 : 0이 아닌 값
	// 거짓 : 0

	int truefalse = true; // 1

	// bool 타입은 c에 없다.

	bool IsTrue = 100;
	IsTrue = !IsTrue; // !참 -> 거짓
	printf("%d\n", IsTrue);

	IsTrue = 100 && 200; // 참 && 참
	printf("%d\n", IsTrue);

	IsTrue = 0 && 200;
	printf("%d\n", IsTrue);

	IsTrue = 0 || 300;
	printf("%d\n", IsTrue);

	// 비교연산자
	// == != >= <= > < 

	// 구문
	// 비교구문
	// if, else
	// switch case
	int data = 0;
	if (100 && 100) // true
	{
		data = 100;
		printf("참!!!!!!\n");
	}

	if (data == 100)
	{
		printf("data는 100이 맞습니다.");
	}
	else
	{
		printf("data는 100이 아닙니다.");
	}

	
	if (1.1)
	{
		printf("체크1");
	}
	else if (3)
	{
		printf("체크1");
	}
	
	if (2)
	{
		printf("체크1");

	}
	else
	{
		printf("체크1");

	}

	int switch_on = 1;
	switch (switch_on)
	{
	case 1:
	case 2:
		printf("hello");
		break;
	default:
		break;
	}

	if (switch_on == 1 || switch_on == 2)
	{

	}
	else
	{

	}
	// 코드를 작성할 때 우리는 지금 디버그 모드로 코딩을 한다.
	// 수행하지 않는 코드는 컴파일러에서도 최적화 옵션을 키면 
	// 코드를 삭제해 버린다.

	// 삼항 연산자
	// :?

	int test = switch_on > 2 ? 100 : 200;

	return 0;
}