#include <stdio.h>

/**
 *main - a program that prints prints all arguments it receives.
 *@argc: is de commande line
 *@argv:are the in the array
 *
 *Return: return 0 if success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
