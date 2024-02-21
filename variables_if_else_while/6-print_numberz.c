#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print digit of base 10 from 0
 *withoot all fonction excepte putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
