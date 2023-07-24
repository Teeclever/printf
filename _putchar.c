#include "main.h"

/**
 * _putchar - A function that prints one one character
 * @c: receive character with an integer value
 * Return: print one character
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
