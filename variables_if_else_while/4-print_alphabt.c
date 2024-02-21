#include <stdio.h>
#include <stdlib.h>
/**
*main - main fonction try to print this one in char
*Description: prints the alphabet in lowercase, followed by a new line
*Return: tell me with a 0 if the code work
*/

int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
