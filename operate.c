#include "main.h"

/**
 * operate - A function that pass in other function
 * @format: a character
 * @functions: a structure
 * @args: A list of argument
 * Return: char
*/


int operate(const char *format, covert functions[], va_list args)
{
	int i;
	int t;
	int  value;
	int print = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			for (t = 0; functions[t].str != NULL; t++)
			{
				if (format[i + 1] == functions[t].str[0])
				{
					value = functions[t].point(args);
					if (value == -1)
						return (-1);
					print += value;
					break;
				}
			}
			if (functions[t].str == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_putchar(format[i]);
					_putchar(format[i + 1]);
					print = print + 2;
				}
				else
					return (-1);
			}
			i = i + 1;
		}
		else
		{
			_putchar(format[i]);
			print++;
		}
	}
	return (print);
}
