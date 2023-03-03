#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value1
 * @src: input value2
 *
 * Return: void
 */
char *_strcat(char *desk, char *src);
{
	int i;
	int j;

	i = 0
	while (desk[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		desk[i] = src[j];
		i++;
		j++;
	}

	desk[i] =  '\0';
	return (desk);

}

