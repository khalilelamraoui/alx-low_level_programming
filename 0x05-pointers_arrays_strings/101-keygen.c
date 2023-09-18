#include"main.h"
#include <stdlib.h>
#include <time.h>
int main(void)
{
	char password;
	int sum, diff;

	srand(time(NULL));

	while (sum <= 2645)
	{
		password = rand() % 120;
		sum += password;
		putchar(password);
	}

	diff = 2772 - sum;
	putchar(diff);

	return (0);
}
