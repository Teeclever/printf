#include "main.h"

/**
 * print_octal - a function  Prints the numeric number in octal base
 * @args: all the arguments passed to the program
 * Return: Number printed to stdout
 */

int print_octal(va_list args)
{
	unsigned int nums;
	int len;
	char *octal_rep;
	char *rev_str;

	nums = va_arg(args, unsigned int);

	if (nums == 0)
		return (_putchar('0'));
	if (nums < 1)
		return (-1);
	len = base_len(nums, 8);

	octal_rep = malloc(sizeof(char) * len + 1);
	if (octal_rep == NULL)
		return (-1);
	for (len = 0; nums > 0; len++)
	{
		octal_rep[len] = (nums % 8) + 48;
		nums = nums / 8;

	}
	octal_rep[len] = '\0';
	rev_str = rev_string(octal_rep);
	if (rev_str == NULL)
		return (-1);

	base(rev_str);
	free(octal_rep);
	free(rev_str);
	return (len);
}
