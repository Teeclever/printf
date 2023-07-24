#include "main.h"

/**
 * string - A functtion that print out char
 * @str: char
 * Return: length of string
 *
 */

int string(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		length += 1;
		str++;
	}
	return (length);
}
