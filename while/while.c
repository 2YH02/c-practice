#include <stdio.h>

int main(void)
{
	int input = 0, i = 0;

	scanf_s("%d", &input);

	if (input < 1 || input > 9) {
		puts("1���� 9 ������ ���� �Է����ּ���.");
		return 0;
	}

	while (i < input) {
		putchar('*');
		i++;
	}

	putchar('\n');
}