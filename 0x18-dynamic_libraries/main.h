#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>

/*
 *_putchar - writes the character c to stdout
 *@c: The character to print
 * Return: On success 1.
*/
int _putchar(char c);
/*
    * _islower - checks for lowercase character
    * @c: The character to print
    * Return: On success 1.
*/
int _islower(int c);
/*
    * _isalpha - checks for alphabetic character
    * @c: The character to print
    * Return: On success 1.
*/
int _isalpha(int c);
/*
    * _abs - computes the absolute value of an integer
    * @n: The character to print
    * Return: On success 1.
*/
int _abs(int n);
/*
    * _isupper - checks for uppercase character
    * @c: The character to print
    * Return: On success 1.
*/
int _isupper(int c);
/*
    * _isdigit - checks for a digit (0 through 9)
    * @c: The character to print
    * Return: On success 1.
*/
int _isdigit(int c);
/*
    * _strlen - returns the length of a string
    * @s: The character to print
    * Return: On success 1.
*/
int _strlen(char *s);
/*
    * _puts - prints a string, followed by a new line, to stdout
    * @str: The character to print
    * Return: On success 1.
*/
void _puts(char *s);
/*
    * *_strcpy - copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest
    * @dest: The character to print
    * @src: The character to print
    * Return: On success 1.
*/
char *_strcpy(char *dest, char *src);
/*
    * _atoi - converts a string to an integer
    * @s: The character to print
    * Return: On success 1.
*/
int _atoi(char *s);
/*
    * *_strcat - concatenates two strings
    * @dest: The character to print
    * @src: The character to print
    * Return: On success 1.
*/
char *_strcat(char *dest, char *src);
/*
    * *_strncat - concatenates two strings
    * @dest: The character to print
    * @src: The character to print
    * @n: The character to print
    * Return: On success 1.
*/
char *_strncat(char *dest, char *src, int n);
/*
    * *_strncpy - copies a string
    * @dest: The character to print
    * @src: The character to print
    * @n: The character to print
    * Return: On success 1.
*/
char *_strncpy(char *dest, char *src, int n);
/*
    * *_strcmp - compares two strings
    * @s1: The character to print
    * @s2: The character to print
    * Return: On success 1.
*/
int _strcmp(char *s1, char *s2);
/*
    * *_memset - fills memory with a constant byte
    * @s: The character to print
    * @b: The character to print
    * @n: The character to print
    * Return: On success 1.
*/
char *_memset(char *s, char b, unsigned int n);
/*
    * *_memcpy - copies memory area
    * @dest: The character to print
    * @src: The character to print
    * @n: The character to print
    * Return: On success 1.
*/
char *_memcpy(char *dest, char *src, unsigned int n);
/*
    * *_strchr - locates a character in a string
    * @s: The character to print
    * @c: The character to print
    * Return: On success 1.
*/
char *_strchr(char *s, char c);
/*
    * *_strspn - gets the length of a prefix substring
    * @s: The character to print
    * @accept: The character to print
    * Return: On success 1.
*/
unsigned int _strspn(char *s, char *accept);
/*
    * *_strpbrk - searches a string for any of a set of bytes
    * @s: The character to print
    * @accept: The character to print
    * Return: On success 1.
*/
char *_strpbrk(char *s, char *accept);
/*
    * *_strstr - locates a substring
    * @haystack: The character to print
    * @needle: The character to print
    * Return: On success 1.
*/
char *_strstr(char *haystack, char *needle);

#endif