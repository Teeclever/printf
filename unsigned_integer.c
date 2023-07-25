#include "main.h"

/**
 * print_unsigned_integer - An entry to a function the print int
 * @args: store int value
 * Return: int
*/


int print_unsigned_integer(va_list args)
{
	int i;
	int lenght;
	unsigned int nums;
	int equal;

	i  = va_arg(args, int);
	equal = 1;
	lenght = 0;

	if (i < 0)
	{
		lenght += _putchar('-');
		nums = i * -1;
	}
	else
		nums = i;

	while (nums / equal > 9)
		equal *= 10;

	while (equal != 0)
	{
		lenght += _putchar('0' + nums / equal);
		nums %= equal;
		equal /= 10;
	}

	return (lenght);
}


/**
 * print_unsgined_number - a progarm Prints an unsigned number
 * @n: unsigned integer to be printed
 * Return: The amount of numbers printed
 */

int print_unsgined_number(unsigned int n)
{
	int equal;
	unsigned int nums;
	int length;

	equal = 1;
	length = 0;

	nums = n;

	while (nums / equal > 9)
		equal *= 10;

	while (equal != 0)
	{
		length += _putchar('0' + nums / equal);
		nums %= equal;
		equal /= 10;
	}

	return (length);
}

