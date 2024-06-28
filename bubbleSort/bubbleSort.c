#include <stdio.h>

int main(void)
{
	char aList[5] = { 4, 2, 1, 3, 5 };

	for (int i = 0; i < 4; ++i)
	{
		for (int j = i + 1; j < 5; ++j)
		{
			if (aList[j] < aList[i])
			{
				int tmp = aList[i];
				aList[i] = aList[j];
				aList[j] = tmp;
			}
		}
	}

	for (int i = 0; i < 5; ++i)
		printf("%d  ", aList[i]);


	return 0;
}