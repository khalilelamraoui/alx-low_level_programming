#include"main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 * @s: pointer to a pointer to char.
 * @to: pointer to a char to set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
