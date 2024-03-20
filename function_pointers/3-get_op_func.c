#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "function_pointers.h"
#include "3-calc.h"
/**
 * get_op_func - a function that selects the correct function to perform
 * the operation asked by the user
 * @s: is the operator passed as argument
 * Return: returns a pointer to the function that corresponds to the operator
 * given as a parameter.
 **/

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
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
