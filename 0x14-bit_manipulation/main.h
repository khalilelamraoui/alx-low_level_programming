#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>

/**
 * binary_to_uint - Converts a binary number represented as a string to an
 * unsigned integer.
 * @b: A pointer to a string of 0 and 1 characters.
 * Return: The converted unsigned integer or 0 if there are non-binary
 * characters in the string or if 'b' is NULL.
 */
unsigned int binary_to_uint(const char *b);


#endif
