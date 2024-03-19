#include <stdio.h>
#include "function_pointers.h"
/**
 * get_op_func - a function that selects the correct function to perform
 * the operation asked by the user
 * @s:
 * @size: is the size of the array
 * @action: executes a function
 * Return: .
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
    while (ops[i].op != NULL)
    {
	    return (ops[i].f);
	    if (i > 4)
		    break;
	    i++;
    }
}
