#include <stdio.h>

#define HUNGRY 0x01
#define HOT 0x02
#define THIRSTY 0x04
#define TIRED 0x08

#define SLEEP 0x10
#define ANGRY 0x20
#define HAPPY 0x40
#define SAD 0x80

int chapter_11()
{
	// 비트연산을 활용해보자
	// 32bit 값으로 32가지의 상태를 표현해줄 수 있지!!
	// 1byte는? 8개의 상태를 표현 할 수 있다!!

	unsigned char chStatus = 0; // 0000_0000
	chStatus |= HUNGRY; // 0000_0001
	chStatus |= HOT; // 0000_0011
	chStatus |= THIRSTY; // 0000_0111
	chStatus |= SLEEP; // 0001_0111
	chStatus |= SAD; // 1001_0111

	printf("%#x\n", chStatus); //이렇게 찍으면 

	// 상태값 체크하기!!!!
	if (chStatus & SAD) // 1000_0000 참이지. 왜? 0을 제외한 모든 수는 참이다.
	{
		printf("슬퍼ㅠ.ㅠ\n");
	}
	if (chStatus & THIRSTY)
	{
		printf("목말라~~\n");
	}

	// 특정 비트 제거하기!!
	chStatus &= ~THIRSTY;
	if (chStatus & THIRSTY)
	{
		printf("목말라~~\n");
	}

	/*
	* 문제) 헬렝이의 감정상태에 따라 오늘 할일을 출력하는 프로그램을 만들어 보자.
	* define값은 1 2 4 8 16 32 64 128 (16진수로 저장해도 된다)
	* 기쁘다. 슬프다. 화난다. 아프다. 배고프다. 목마르다. 졸리다. 지루하다
	* 기쁘면 -> 운동을 하러 간다
	* 슬프면 -> 영화를 본다.
	* 아프면 -> 병원에 간다.
	* 배고프면 -> 밥을 먹는다.
	* 목마르면 -> 물을 마신다.
	* 졸리면 -> 잔다.
	* 지루하면 -> 산책을 간다.
	* 
	* 1)현재 나의 감정상태는 기쁘면서 배고프면서 목마르면서 졸리면서 아픈 상태다다.
	*   이걸 화면에 출력
	* 
	* 2) 병원에 갔더니 의사가 아픈지 꾀병인지 체크를 했다.
	* 꾀병이면 -> 꾀병이다.를 출력
	* 아프면 -> 아프다를 출력
	* 
	* 3) 그래서 나는 밥을 먹고 물을 마셔서 해결했고 병원에 가서 아픔을 해결했다.
	* 이제는 졸리고 지루하다. 이부분을 추가해서 출력해보자.
	* 
	*/

	


}