#include <stdio.h>

int* Func(void)
{
	int nData = 10;
	return &nData;
}

int* Func2(void)
{
	int a = 5;
	return NULL;
}

int main(void)
{
	int* pnResult = NULL;
	pnResult = Func();

	Func2();

	printf("%d\n", *pnResult);

	return 0;
}