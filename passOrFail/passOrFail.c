#include <stdio.h>

int main(void)
{
	int score = 0;

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);

	printf("���: %s\n", (score >= 80) ? "�հ�" : "���հ�");

	return 0;
}