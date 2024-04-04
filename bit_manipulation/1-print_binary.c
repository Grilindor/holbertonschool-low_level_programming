#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 *@n: unsigned long int
 *Return: void
 **/

void print_binary(unsigned long int n)
{
	/*Check if n is greater than 0*/
	if (n >> 0)
	{
		/*Check if n is greater than 1*/
		if (n >> 1)
			/*Recursively call print_binary with n shifted right by 1*/
			print_binary(n >> 1);
		/*Print the least significant bit of n by bitwise AND operation with 1*/
		_putchar((n & 1) + '0');
	}
	else
	{
		/*If n is 0, print '0'*/
		_putchar('0');
	}
}
