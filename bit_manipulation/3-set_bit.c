#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: Pointer to the unsigned long integer
 * @index: Index of the bit to set (starting from 0)
 * Return: 1 succes, -1 faill
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if within the range*/
	if (index < 64)
	{
/*se bitwise OR operator to set the bit at the given index to 1*/
		*n |= (1UL << index);
		return (1);
	}
	else
		return (-1);
}
