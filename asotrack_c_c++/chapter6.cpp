#include <cstdio>
int main()
{
	// 증감연산자
	int data = 0;
	data--; // 후위 (연산자 우선순위가 가장!!!! 낮다)
	data--;

	data++;
	data++;

	--data; // 전위 (연산자 우선순위가 가장!!!! 높다)
	--data;

	++data;
	++data;

	int a = 0;
	data = 0;
	data = a++;
	printf("%d %d\n", data, a);

	a = 0;
	data = 0;
	data = ++a;
	printf("%d %d\n", data, a);

}