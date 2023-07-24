#include "main.h"

/**
  *_printf - A printf function that takes in agument
  *@format: an argument that takes char
  *Return: A return value of a printed chars
  */

int _printf(const char *format, ...)
{
	int i;
	int lenght = 0;
	int x;
	int value;
	va_list list;

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			i++;
		}

		else if (format[i + 1] == 's')
		{
			x = string(va_arg(list, char *));
			i++;
			lenght += (x - 1);
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			value = integer_print(va_arg(list, int);
			i++;
			lenght += value - 1;
		}
	lenght++;
	}
	va_end(list);
	return (lenght);
}
