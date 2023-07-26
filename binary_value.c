#include "main.h"

/**
 * print_binary - A program that converts a number from base 10 to binary
 *
 * @args: List of argument
 * Return: the length of the number
 */

int print_binary(va_list args)
{
	unsigned int num;
	int i, len;
	char *str;
	char *rev;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));
	if (num < 1)
		return (-1);
	len = base_len(num, 2);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (-1);
	for (i = 0; num > 0; i++)
	{
		if (num % 2 == 0)
			str[i] = '0';
		else
			str[i] = '1';
		num = num / 2;
	}
	str[i] = '\0';
	rev = rev_string(str);
	if (rev == NULL)
		return (-1);
	base(rev);
	free(str);
	free(rev);
	return (len);
}
