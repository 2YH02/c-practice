#include <stdio.h>
#include <conio.h>

int main(void)
{
	char ch = 0;

	printf("아무 키나 눌러주세요. \n");

	ch = _getch();

	putchar(ch);
	printf("를 입력했습니다. \n");

	return 0;

}