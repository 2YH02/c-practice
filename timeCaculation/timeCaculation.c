#include <stdio.h>

int main(void)
{
	int count = 0;

	scanf_s("%d", &count);

	printf("%d초는 %d시간 %02d분 %02d초 입니다.", count, count / 3600, (count % 3600) / 60, count % 60);

	return 0;
}