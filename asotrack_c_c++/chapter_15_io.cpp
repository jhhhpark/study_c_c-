#include <stdio.h>
int chapter_15()
{
	// #include �ش� ������ �̸� ����(��ó����)
	
	// stdio.h���Ͽ� �ִ� �Լ���
	// printf() �ܼ� ��� �Լ� 
	printf("abcdef\n"); // �ش� ���ڿ��� �ֿܼ� ����ϰ�, Ŀ���� ���� ��ġ�� �̵���Ŵ.
	
	printf("%d\n",65); // 10�� �������. ���� ���� decimal
	
	printf("%c\n", 65); // character
	
	printf("%f\n", 3.14); // float
	printf("%lf\n", 3.14); // long float

	for (int i = 0; i < 10; ++i)
	{
		printf("Output i : %d\n", i);
	}
	
	// scanf() �ܼ� �Է� �Լ�
	int n1 = 0;
	int n2 = 0;
	scanf_s("%d%d", &n1, &n2);
	printf("n1 = %d, n2 = %d\n", n1, n2);

	// �Է��� ������!!!!!!!
	char c1;
	scanf_s("%c", &c1);
	// ����? 
	printf("c1 = %c\n", c1);

	/*
	* �� �����/....?
	* n1 = 10, n2 = 20,
	* c1 =
	* 
	*/



	/* ���� : �ڱ�Ұ��� �غ���
	* 1. �� Ÿ�Կ� �°� name, age, job, school, dream�� �ֿܼ� �Է��غ���.
	* 2. �Է��� ���� �� ���̰� �߸��Ȱ� ����.
	* 10 30 50 70 90 110 �� �Է��ؼ� ���� ����� ������ ����غ���.
	*/

	return 0;
}