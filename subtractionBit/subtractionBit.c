#include <stdio.h>

int main(void)
{
	int num1, num2;
	int result = 0;

	scanf_s("%d%d", &num1, &num2);

	result = num1 + (~num2 + 1);

	printf("���: %d", result);

	return 0;
}
