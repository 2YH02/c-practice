#include <stdio.h>

int main(void)
{
	char aList[5] = { 30, 40, 10, 50, 20 };
		

	for (int i = 0; i < 5; ++i)
	{
		if (aList[i] < aList[0])
		{
			int tmp = aList[0];
			aList[0] = aList[i];
			aList[i] = tmp;
		}
	}

	for(int i = 0; i < 5; ++i)
		printf("%d  ", aList[i]);

	return 0;
}