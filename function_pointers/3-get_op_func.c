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
	while (ops[i].f != NULL)
	{
		if (*s == *(ops[i].op) && s[1] == '\0')
/*compare pointer s avec ops et si y a 1 seul symbole*/
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
