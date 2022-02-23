#include <stdio.h>
int Factorial_Re(int n, int nResult)
{
	if (n == 1)
	{
		return nResult;
	}
	return Factorial_Re(n - 1, nResult * n);
}

int Fibonacci_sequence(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	int pre = 1;
	int cur = 1;
	int temp = 0;
	for (int i = 3; i <= n; ++i)
	{
		temp = cur;
		cur += pre;
		pre = temp;
	}
	return cur;
}

int Recursive_Fibonacci(int n)
{
	if (n <= 2)
	{
		return 1;
	}

	return Recursive_Fibonacci(n - 1) + Recursive_Fibonacci(n - 2);
}

int chapter_19()
{
	printf("%d\n", Recursive_Fibonacci(10));

	return 0;
}

