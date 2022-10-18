#include <stdio.h>

/**
 * main - Prints single digit numbers with comma and space
 * Return: returns 0
 *Uses ASCII codes and putchar command
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((i % 10) + '0');
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
