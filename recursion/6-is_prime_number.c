#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_pow_recursion - main fontion check for the squar of n
 *@n: it's the numbers
 *@y: the initial of n (sere de reference) fonction 1 pour la fonction et
 * l'autre pour aider la fontion
 *_sqrt_recursion - fonction return n
 *Return: return
 */

int _pow_recursion(int n, int y)
{
	if (n * n == y)
		return (n);
	else if (n * n > y)
		return (-1);
	return (_pow_recursion(n + 1, y));
}
/**
 *_sqrt_recursion - fonction return n
 *@n: int
 *Return: return
 **/

int is_prime_number(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (_pow_recursion(n, 2));
}
