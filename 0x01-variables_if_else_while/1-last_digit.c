#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-peogram that print last digit
 *
 * Return: 0;
 */
int main(void)
{
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	printf("last digit %d is %d and is greater than 5\n", n);
	else if (ld == 5)
	printf("last digit %d is %d and is 0\n", n);
	else
	printf("last digit %d is %d and is less than 6 and not 0\n", n);
	return (0);
}
