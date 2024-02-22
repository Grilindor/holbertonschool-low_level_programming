#include <stdio.h>
#include <stdlib.h>
/**
*main - main fonction  prints all possible combinations
*of single-digit numbers
*Return: tell me with a 0 if the code work
*/

int main(void)
{
	int i = '0';
	int P = ',';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i < '9')
		{
			putchar(P);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
