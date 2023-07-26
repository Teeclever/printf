#include "main.h"
/**
 * integer - A program that Prints an integer
 * @args: list of arguments
 * Return: the amount of characters printed.
 */

int integer(va_list args)
{
	int num_length;

	num_length = integers(args);
	return (num_length);
}


/**
 * integers - prints a number send to this function
 * @args: List of arguments
 * Return: The number of arguments printed
 */

int integers(va_list args)
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
