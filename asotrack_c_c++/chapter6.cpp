#include <cstdio>
int main()
{
	// ����������
	int data = 0;
	data--; // ���� (������ �켱������ ����!!!! ����)
	data--;

	data++;
	data++;

	--data; // ���� (������ �켱������ ����!!!! ����)
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