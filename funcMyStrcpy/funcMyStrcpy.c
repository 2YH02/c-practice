#include <stdio.h>

void MyStrcpy(char* pszDst, unsigned int nSize, char* pszSrc)
{
	size_t nLenSrc = 0;
	nLenSrc = strlen(pszSrc);

	for (int i = 0; i < nLenSrc; ++i)
		pszDst[i] = pszSrc[i];
}

int main(void)
{
	char szBufferSrc[12] = { "TestString" };
	char szBufferDst[12] = { 0 };

	MyStrcpy(szBufferDst, sizeof(szBufferDst), szBufferSrc);

	puts(szBufferDst);

	return 0;
}

