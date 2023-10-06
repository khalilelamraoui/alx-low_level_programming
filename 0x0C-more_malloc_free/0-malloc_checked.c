#include"main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: The size of the memory block to allocate
 *
 * Return: A pointer to the allocated memory
 *         If malloc fails, the program terminates with status 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
