#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - main fonction print number at 98
*
*Return: tell me with a 0 if the code work
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0)
			printf("Fizz");
		else if ((n % 5) == 0)
			printf("Buzz");
		else if ((n % 15) == 0)
			printf("FizzBuzz");
		else
			printf("%d", n);
		printf(" ");
	}
	return (0);
}
