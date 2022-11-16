#include <stdlib.h>
#include "3-calc.h"
/**
 *get_op_func - gets the correct function to be used in the operation
 *@s: operator string
 *Return: pointer to correct operator function
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
	int i;

	i = 0;
	while (i < 6)
	{
		if (s == op[i][0])
			return (op[i][1]);
	}
	return (NULL);
}
