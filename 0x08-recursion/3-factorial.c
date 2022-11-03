#include "main.h"

/**
 * factorial - returning factorial of a given number
 * @n:integer
 * Return:void
 */

int factorial(int n)
{
	if (n == 0) /*Base condition*/
	return (0);
	else if (n < 0) /*base condition*/
	return (-1);
	else
	return (n * factorial(n - 1));
}
