#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length(lth)
 */
int _strlen(char *s)
{
	int lth = 0;

	while (*s != '\0')
	{
		lth++;
		s++;
	}

	return (lth);
}
