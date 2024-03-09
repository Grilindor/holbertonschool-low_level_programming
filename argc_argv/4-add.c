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
	int i, j, total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; j < argv[i][j]; j++)
		{
			if (argc == 0)
			{
				printf("0\n");
				break;
			}
			else if (!(argv[i][j] >= 48 && argv[i][j] <= 57))
			{
				printf("Error\n");
				return (1);
			}
		}
		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
