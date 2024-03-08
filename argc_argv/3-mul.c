#include <stdio.h>

/**
 *main - a program that prints multiplies two numbers
 *@argc: is de commande line
 *@argv:are the in the array
 *
 *Return: return 0 if success
 */

int main(int argc, int *argv[])
{
	int i;

	if (argc < 2)
	{
		printf("ERROR\n");
		return (1);
	}
	else
		for (i = 1; i < argc; i++)
			printf(argv[1] * argv[2]);
	printf("\n");
	return (0);
}
