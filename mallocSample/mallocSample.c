#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	// 동적할당 0 초기화는 필수가 아님 (문자열 저장할 거 같으면 가급적 0 초기화)
	int* pList = NULL, * pNewList = NULL;
	int aList[3] = { 0 };

	pList = (int*)malloc(sizeof(int) * 3);
	memset(pList, 0, sizeof(int) * 3);

	pNewList = (int*)calloc(3, sizeof(int));

	for (int i = 0; i < 3; ++i)
		printf("pList[%d]의 값 : %d\n", i, pList[i]);

	for (int i = 0; i < 3; ++i)
		printf("pNewList[%d]의 값 : %d\n", i, pNewList[i]);

	free(pList);
	free(pNewList);

	return 0;
}