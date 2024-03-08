#include <stdio.h>

/**
 *main - a program that prints its name, followed by a new line
 *@argc: is de commande line
 *@argv:are the in the array
 *
 *Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s", argv[i]);
	printf("\n");
	return (0);
}
