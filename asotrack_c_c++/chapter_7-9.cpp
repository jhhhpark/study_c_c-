#include <cstdio>
int chapter_7_9()
{
	// �� ������
	// �� ����
	// !(not), &&(and), ||(or)
	// �� : 0�� �ƴ� ��
	// ���� : 0

	int truefalse = true; // 1

	// bool Ÿ���� c�� ����.

	bool IsTrue = 100;
	IsTrue = !IsTrue; // !�� -> ����
	printf("%d\n", IsTrue);

	IsTrue = 100 && 200; // �� && ��
	printf("%d\n", IsTrue);

	IsTrue = 0 && 200;
	printf("%d\n", IsTrue);

	IsTrue = 0 || 300;
	printf("%d\n", IsTrue);

	// �񱳿�����
	// == != >= <= > < 

	// ����
	// �񱳱���
	// if, else
	// switch case
	int data = 0;
	if (100 && 100) // true
	{
		data = 100;
		printf("��!!!!!!\n");
	}

	if (data == 100)
	{
		printf("data�� 100�� �½��ϴ�.");
	}
	else
	{
		printf("data�� 100�� �ƴմϴ�.");
	}

	
	if (1.1)
	{
		printf("üũ1");
	}
	else if (3)
	{
		printf("üũ1");
	}
	
	if (2)
	{
		printf("üũ1");

	}
	else
	{
		printf("üũ1");

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
	// �ڵ带 �ۼ��� �� �츮�� ���� ����� ���� �ڵ��� �Ѵ�.
	// �������� �ʴ� �ڵ�� �����Ϸ������� ����ȭ �ɼ��� Ű�� 
	// �ڵ带 ������ ������.

	// ���� ������
	// :?

	int test = switch_on > 2 ? 100 : 200;

	return 0;
}