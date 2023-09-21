#include"main.h"
 /*
  * print_buffer: function that prints buffer
  * @b: buffer
  * @size: size wanted
  * return: void
  */
void print_buffer(char *b, int size) {
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", (unsigned char)b[i + j]);
			else
				printf("  ");
			if (j % 2 == 1)
				printf(" ");
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= 32 && b[i + j] <= 126)
					printf("%c", b[i + j]);
				else
					printf(".");
			}
		}
		printf("\n");
	}
}
