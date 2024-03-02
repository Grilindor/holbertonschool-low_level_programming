#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include "2-strlen.c"

/**
 **reverse_array - main fontion it's like printf
 *@a: l'array
 *@n: the long in a
 *
 *no return
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		int save;

		save = a[i];
		a[i] = a[n - 1];
		a[n - 1] = save;
		/**
		 *si l'on met a[n - 1] cela ferat avec la
		 *decrementation (n--) n-2, n-3 ect
		 *ce qui enregitrera l'aray a a l'enver
		 */
		n--;
	}
}
