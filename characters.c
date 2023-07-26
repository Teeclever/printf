#include "main.h"
/**
 * printchar - An entry to a program that return char
 * @args: an agument
 * Return: the lenght
*/

int printchar(va_list args)
{
	char print;

	print = va_arg(args, int);
	_putchar(print);
	return (1);
}

/**
 * stringchar - An entry to a program that return string
 * @args: an agument
 * Return: the lenght
*/


int stringchar(va_list args)
{
	const char *s;
	int i;

	s = va_arg(args, const char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);
	return (i);
}
