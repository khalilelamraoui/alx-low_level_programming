#include"main.h"
#include <stdlib.h>
#include <time.h>

char RandomCharacter()
{
	const char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int i = rand() % (sizeof(charset) - 1);
	return charset[i];
}

int main() {
	int i, password_length = 15;
	srand(time(NULL));

	for (i = 0; i < password_length; i++)
	{
		char randomChar = RandomCharacter();
		putchar(randomChar);
	}
	putchar('\n');

	return 0;
}
