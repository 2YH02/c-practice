#include <stdio.h>

int main(void)
{
	int count = 0;

	scanf_s("%d", &count);

	printf("%d�ʴ� %d�ð� %02d�� %02d�� �Դϴ�.", count, count / 3600, (count % 3600) / 60, count % 60);

	return 0;
}