#include "main.h"

/**
 * print_rev - a program that prints a string in reverse
 * @args: argument from _printf
 * Return: length of the printed string
 */

int print_rev(va_list args)
{
	int i = 0, j;
	char *s = va_arg(args, char *);

	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putchar(s[j]);

	return (i);
}
