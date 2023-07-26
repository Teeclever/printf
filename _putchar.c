#include "main.h"


/**
 * _putchar - An entry that print a char
 * @c: recive an integer value
 * Return: value 1
 */

int _putchar(char c)
{
		return (write(1, &c, 1));
}


/**
 * _puts - a progarm prints a string to stdout
 * @str: pointer to the string to print
 * Return: number of chars written
 */

int _puts(char *str)
{
		register short i;

			for (i = 0; str[i]; i++)
			_putchar(str[i]);
			return (i);
}

