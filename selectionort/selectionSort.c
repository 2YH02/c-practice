#include <stdio.h>

int main(void)
{
	char aList[5] = { 3, 5, 1, 2, 5 };
	int idx = 0;

	for (int i = 0; i < 4; ++i)
	{
		idx = i;
		for (int j = i + 1; j < 5; ++j)
		{
			if (aList[j] < aList[idx]) {
				idx = j;
			}
		}

		if (idx != i)
		{
			int tmp = aList[i];
			aList[i] = aList[idx];
			aList[idx] = tmp;
		}
	}

	for (int i = 0; i < 5; ++i)
		printf("%d  ", aList[i]);

	return 0;
}