 1#include <stdio.h>
 2#include "main.h"
 3/**
 4*print_numbers - print 0 to 9
 5*@
 6*
 7*Return: tell me with a 0 if the code work
 8*/
 9void print_numbers(void)
10{
11        int i;
12
13        for (i = 0; i <= 9; i++)
14        {
15                _putchar('0' + i);
16        }
17        _putchar('\n');
18}
