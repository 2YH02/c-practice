#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	scanf_s("%d", &num);

	sum += num;

	scanf_s("%d", &num);

	sum += num;

	scanf_s("%d", &num);

	sum += num;

	printf("Total: %d", sum);

	return 0;
}