#include <stdio.h>

int main(void)
{
	char szName[32] = { 0 };
	printf("이름을 입력해주세요: ");
	// 보안 문제
	// gets(szName);
	gets_s(szName, sizeof(szName));

	printf("당신의 이름은 ");
	puts(szName);
	puts("입니다.");

	return 0;
}