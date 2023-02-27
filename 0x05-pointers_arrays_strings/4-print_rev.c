#include "main.h"
/**
 * print_rev - function that prints a string,in reverse
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int lth = 0;
	int o;

	while (*s != '\0')
	{
		lth++;
		s++;
	}
	s--;
	for (o = lth; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
