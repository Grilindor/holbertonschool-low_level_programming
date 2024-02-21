#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints all the numbers of base 16 in lowercase, and new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = '0';
	char letter = 'a';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
