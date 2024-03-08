#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 *_prime_check - main fontion check if n is primal number
 *@n: it's the original number
 *@y: it's the increment
 * l'autre pour aider la fontion
 *_sqrt_recursion - fonction return n
 *Return: return
 */

int _prime_check(int y, int n)
{
	if (y * y > n)
		return (1);
	else if (n % 2 == 0)
		return (1);
	else if (y % n == 0)
		return (0);
	return (_prime_check(y + 1, n));
}
/**
 *is_prime_number - fonction return the value of n ans is increment
 *@n: int
 *Return: return
 **/

int is_prime_number(int n)
{
	return (_prime_check(1, n));
}
