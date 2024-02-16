#include <stdio.h>

int main(void)
{
	int num = 0;
	int max = 0;

	scanf_s("%d", &num);
	max = num;

	scanf_s("%d", &num);
	max = (num > max) ? num : max;

	scanf_s("%d", &num);
	max = (num > max) ? num : max;

	printf("Max: %d", max);

	return 0;
}