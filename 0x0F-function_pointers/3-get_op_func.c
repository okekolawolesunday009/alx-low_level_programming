#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - gets the desired function
 * @s: unusuesd parameter, that is why we set the if
 * Return: always gets the specific func
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

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
