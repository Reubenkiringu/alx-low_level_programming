#include "main.h"

/**
 * _strlen - finds the length of the string
 * @str: pointer for the stringto be checked
 * Return: void
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
