#include <stdio.h>

/**
 *main - a program that prints the number of arguments passed into it
 *@argc: is de commande line
 *@argv:are the in the array
 *
 *Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int i, compt = 0;

	for (i = 1; i < argc; i++)
	{
		argv++;
		compt++;
	}
	printf("%d\n", compt);
	return (0);
}
