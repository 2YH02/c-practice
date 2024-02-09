#include <stdio.h>

int main(void)
{
	int a, b, tmp;

	scanf_s("%d%d", &a, &b);

	tmp = a;
	a = b;
	b = tmp;

	printf("a: %d, b: %d", a, b);

	return 0;
}
