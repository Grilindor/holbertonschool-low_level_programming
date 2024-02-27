#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*print_diagonal - main fonction print number at 98
*@n: it's a value
*Return: tell me with a 0 if the code work
*/
void print_triangle(int size)
{
        int y = 0;
        int espa;

        if (size >= 0)
        {
                while (y < size)
                {
                        for (espa = size; espa >= 0; espa--)
                        {
                                if (espa <= y)
                                        _putchar('#');
				else
                                        _putchar(' ');
                        }
                        _putchar('\n');
                        y++;
                }
        }
        else if (size <= 0)
                _putchar ('\n');

}
