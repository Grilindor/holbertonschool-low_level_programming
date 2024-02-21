#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - print alphabet lowercase in revese, and new ligne
 * Return: Always (0) the code is working
*/
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
