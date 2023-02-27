#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, lth;

	lth = 0;

	for (a = 0; str[a] != '\0'; a++)
		lth++;

	n = (lth / 2);

	if ((lth % 2) == 1)
		n = ((lth + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
