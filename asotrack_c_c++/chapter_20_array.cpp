#include <cstdio>

int chapter_20()
{
	// �迭!!
	int array[10] = { 0 };
	int nValue = 10;
	// �迭�� ��Ҵ� �ε����� ���� �����Ѵ�.
	// Ư¡
	// ���� �������� �����ϴ�.
	// �޸𸮿� ���������� �Ҵ�ȴ�.
	array[9] = 20;
	printf("%d\n", array[9]);
}