#include "function_pointers.h"
/**
 * print_name - Prints a name using a specified printing method
 * @name: Pointer to a character array (name)
 * @f: Pointer to a function for printing the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
