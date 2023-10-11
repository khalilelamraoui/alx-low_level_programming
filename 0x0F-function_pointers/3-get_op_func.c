#include "3-calc.h"
/**
 * get_op_func - Selects the correct function for the given operator.
 * @s: The operator passed as a parameter to the program.
 *
 * Return: A pointer to the function corresponding to the operator,
 * or NULL if no match.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
