#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 * Return: The converted unsigned integer or 0 if there are non-binary
 * characters in the string or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b);


#endif
