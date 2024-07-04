#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

int main(void)
{
	char szBuffer[12] = { "HelloWorld" };
	char szNewBuffer[12] = { 0 };

	memcpy(szNewBuffer, szBuffer, 4);
	puts(szNewBuffer);

	memcpy(szNewBuffer, szBuffer, 6);
	puts(szNewBuffer);


	memcpy(szNewBuffer, szBuffer, sizeof(szBuffer));
	puts(szNewBuffer);
	return 0;
}

//int main(void)
//{
// 	char szBuffer[12] = { "HelloWorld" };
//	char* pszData = NULL;
//
//	pszData = (char*)malloc(sizeof(char) * 12);
//	
//	for (int i = 0; i < 12; ++i)
//		pszData[i] = szBuffer[i];
//	puts(pszData);
//
//	return 0;
//}


//int main(void)
//{
//	char szBuffer[12] = { "TestString" };
//	char* pszData = "TestString";
//
//	printf("%d\n", memcmp(szBuffer, pszData, 10));
//	printf("%d\n", memcmp("teststring", pszData, 10));
//	printf("%d\n", memcmp("DataString", pszData, 10));

//	return 0;
//}