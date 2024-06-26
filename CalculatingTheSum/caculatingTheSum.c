#include <stdio.h>

int main(void)
{
	int totalFor = 0;

	int totalWhile = 0;
	int sum = 0;

	for (int i = 1; i <= 10; ++i)
	{
		totalFor += i;
	}

	while (sum < 10)
	{
		++sum;
		totalWhile += sum;
	}

	printf_s("%d \n", totalFor);
	printf_s("%d", totalWhile);
}