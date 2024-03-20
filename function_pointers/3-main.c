#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - a function that performs simple operations
 * @argc: the value
 * @argv: the value
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

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
