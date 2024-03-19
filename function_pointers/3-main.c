#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * array_iterator - a function that executes a function given
 * as a parameter on each element of an array
 * @array: the array
 * @size: is the size of the array
 * @action: executes a function
 * Return: void.
 **/

int main(int argc, char *argv[])
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(arg[3])));
	return (0);
}
