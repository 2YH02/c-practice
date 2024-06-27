#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 5 + i; ++j)
		{
			if (j < 4-i)
				printf("\t");
			else
				printf("*\t");
		}

		puts("\n");
	}

	return 0;
}