#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *main-the main fontion
 *Description:Finding the last digit using the function %10 to get the
 * last digit
 *Return: tell me with a 0 if the code work
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10
	if (last > 5)
	{
	printf("Last digit of %d is %d and is greater than 5", n, last);
	}
	else if (last == 0)
	{
	printf("Last digit of %d is %d and is 0", n, last);
	}
	else if (last != 0; last < 6)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0", n, last);
	}
	return (0);
}