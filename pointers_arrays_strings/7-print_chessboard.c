#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *print_chessboard - main fontion that prints the chessboard
 *@a: it's first array
 *
 *Return: no return it's void
 */

void print_chessboard(char (*a)[8])
{
	int ligne, colonne;

	for (ligne = 0; ligne < 8; ligne++)
	{
		for (colonne = 0; colonne < 8; colonne++)
			_putchar(a[ligne][colonne]);
		_putchar('\n');
	}
}
