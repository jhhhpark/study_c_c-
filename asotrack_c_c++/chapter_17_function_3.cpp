#include <stdio.h>

// ÆÑÅä¸®¾ó
// Factorial

int recursive_factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}

	return n * recursive_factorial(n - 1);
}

int recursive_factorial_2(int n, int sum)
{
	if (n == 1)
	{
		return sum;
	}
	return recursive_factorial_2(n - 1, sum * n);
}

int iterative_factorial(int n)
{
	int nResult = 1;
	if (n == 1)
	{
		return n;
	}
	for (int i = 2; i <= n; ++i)
	{
		nResult *= i;
	}
	return nResult;
}

int chapter_17()
{
	// ÆÑÅä¸®¾ó : n!
	// 5! = 5 * 4 * 3 * 2 * 1
	// 3! = 3 * 2 * 1

	printf("%d\n", recursive_factorial(4));

	printf("%d\n", recursive_factorial_2(4, 1));

	printf("%d\n", iterative_factorial(4));

	return 0;
}