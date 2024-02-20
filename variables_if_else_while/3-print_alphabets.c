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
char LETTER = 'A';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
while (LETTER <= 'Z')
{putchar(LETTER);
LETTER++;
}
{
printf("\n");
}
return (0);
}
