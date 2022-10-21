#include "main.h"

/**
 * _isupper - checks if character is uppercas
 * @c: variable to be checked
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
