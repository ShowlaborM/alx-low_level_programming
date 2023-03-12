#include "main.h"
/**
 * _strlen_recursion - Returns length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int lnth = 0;

	if (*s)
	{
		lnth++;
		lnth += _strlen_recursion(s + 1);
	}

	return (lnth);
}