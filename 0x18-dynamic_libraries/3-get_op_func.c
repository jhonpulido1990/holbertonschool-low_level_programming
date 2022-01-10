#include "3-calc.h"
/**
 * get_op_func - call to one funtion
 * @s: operator
 * Return: data
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", cops_add},
		{"-", cops_sub},
		{"*", cops_mul},
		{"/", cops_div},
		{"%", cops_mod},
		{NULL, NULL}};
	int i;

	while (i < 5)
	{
		if (*s == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
