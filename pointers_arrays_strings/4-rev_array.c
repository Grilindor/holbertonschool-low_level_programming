#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"

/**
 **_strcat - main fontion it's like printf
 *@dest: destination
 *@src: source
 *
 *Return: renvoie le dest
 */

void reverse_array(int *a, int n)
{
	int c, b;

	for (c = 0; c != '\0'; c++)
		_putchar(a[c]);
	for (b = n; b != 0; b--)
		_putchar(a[b]);
}
