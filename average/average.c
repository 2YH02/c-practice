#include <stdio.h>

int main(void)
{
	int num1 = 0;
	
	int num2 = 0;

	printf("�� ������ �Է��ϼ���: ");

	scanf_s("%d%d", &num1, &num2);

	printf("AVG: %0.2f", (num1 + num2) / 2.0);

	return 0;
}