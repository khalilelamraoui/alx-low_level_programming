#include"main.h"
/**
 * get_endianness - Checks the endianness of the system.
 * Return: 0 if the system is big-endian, 1 if it's little-endian.
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	return ((int)*byte_ptr);
}
