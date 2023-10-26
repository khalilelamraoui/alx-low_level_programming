#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 * Return: The converted unsigned integer or 0 if there are non-binary
 * characters in the string or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b);
/**
 * print_binary - Prints the binary representation of an unsigned long integer.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n);
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (starting from 0).
 * Return: The value of the bit at the given index (0 or 1) or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index);


#endif
