#include <stdio.h>

int main()
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			sum += i;
		}
	}

	printf("The sum of all multiples of 3 or 5 below 1024 is: %d\n", sum);

	return 0;
}
