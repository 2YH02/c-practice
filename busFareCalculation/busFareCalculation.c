#include <stdio.h>

int main(void)
{
	int age = 0;
	double rate = 1.0;

	scanf_s("%d", &age);

	if (age < 14)
	{
		if (age < 4)
			rate = 0;
		else
			rate = 0.5;
	}
	else
	{
		if (age < 20)
			rate = 0.75;
	}
	
	double fee = 1000 * rate;
	printf("나이: %d, 최종요금: %d원", age, (int)fee);

	return 0;
}