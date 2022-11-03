#include "main.h"

/**
 * _pow_recursion - rise of power
 * @x:first int
 * @y:second int
 * Return:void
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	else if (y != 0)
	return (x * _pow_recursion(x, y - 1)); /*Recursive call*/
	else
	return (1);
}
