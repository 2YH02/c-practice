#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0, max = 0;

	scanf_s("%d%d%d", &num1, &num2, &num3);
	
	max = (num1 > num2) ? num1 : num2;

	max = (num3 > max) ? num3 : max;


	printf("Max: %d", max);

	return 0;
}