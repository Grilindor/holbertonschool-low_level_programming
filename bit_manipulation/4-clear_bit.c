#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 *@n:the unsigned long integer number from which the bit value is extracted
 *@index: the index of the bit whose value is to be changed
 *Return: -1 faill, 1 succes
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < 64)
	{
/*Use bitwise operations to clear the bit at the specified index*/
		*n &= ~(1UL << index);
		return (1);
	}
	else
		return (-1);
}
