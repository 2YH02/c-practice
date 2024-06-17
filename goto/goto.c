#include <stdio.h>
#include <stdbool.h>

//int main(void)
//{
//	int nInput;

//INPUT :
//	printf("Input Number : ");
//	scanf_s("%d", &nInput);

//	if (nInput < 0 || nInput > 10)
//	{
//		puts("0~10 사이 숫자를 입력해주세요");
//		goto INPUT;
//	}

//	puts("End");

//	return 0;
//}

int main(void)
{
	bool isA = false;
	bool isB = false;

	int nInput;

	scanf_s("%d", &nInput);
	if (nInput > 0)
		isA = true;
	else
		goto CLEAN_UP;

	scanf_s("%d", &nInput);
	if (nInput > 0)
		isA = true;
	else
		goto CLEAN_UP;

CLEAN_UP:
	if (isA) isA = false;
	if (isB) isB = false;

	return 0;
}