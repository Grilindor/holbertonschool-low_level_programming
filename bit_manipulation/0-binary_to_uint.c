#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 *@b: pointer with value
 * Return: unsigned int of binary
 **/

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int count = 0, checking = 1;

	/*Check if input is NULL*/
	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		/*Left shift the count by 1*/
		count <<= 1;

		if (b[i] == '1')
			count ^= checking;
	}
	return (count);
}
