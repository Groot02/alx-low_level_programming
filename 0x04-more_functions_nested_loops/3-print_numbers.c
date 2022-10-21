#include "main.h"

/**
 * print_numbers - print number from 0-9
 * Return: 0
 */

void print_numbers(void)
{
	int i = 0;

	while (i < 10)
		_putchar(i++ + '0');
	_putchar('\n');

	return (0);
}
