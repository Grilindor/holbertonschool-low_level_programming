#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: count
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	int i;
/*Iterate over the 64 bits of integers n and m*/
	for (i = 0; i < 64; i++)
	{
		unsigned long int bit_n = (n >> i) & 1;
		unsigned long int bit_m = (m >> i) & 1;
/*Compare the extracted bits*/
		if (bit_n != bit_m)
		{
			count++;
		}
	}
	return (count);
}
