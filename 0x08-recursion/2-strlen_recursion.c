#include "main.h"

/**
 * _strlen_recursion - returning length of strings
 * @s:string pointer
 * Return:void
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0') /*Base condition*/

	return (0);

	else

	return (1 + _strlen_recursion(s + 1)); /*Sum 1*/
}
