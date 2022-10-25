*include "main.h"

/**
 * _strlen - returning length of string
 * @s: string
 * Return: 0
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
}
