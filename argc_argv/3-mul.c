#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *main - a program that prints multiplies two numbers
 *@argc: is de commande line
 *@argv:are the in the array
 *
 *Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int total;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	total = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", total);
	return (0);
}
