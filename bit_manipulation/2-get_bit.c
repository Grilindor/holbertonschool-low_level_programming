#include "main.h"

/**
 *get_bit - a function that returns the value of a bit at a given index
 *@n: the unsigned long integer number from which the bit value is extracted
 *@index: the index of the bit whose value is to be retrieved
 *Return: the value of the bit at the specified index
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	unsigned int binarie[64];

	/*Convert the decimal number 'n' to binary*/
/*and store it in the 'binarie' array*/
	for (i = 0; i < 64 ; i++)
	{
		binarie[i] = (n & 1);/*Extract the least significant bit*/
		n >>= 1;
	}

	/*Check if the index is within the range of the binary representation*/
	if (index < 64)
		return (binarie[index]);
	else
		return (-1);
}
