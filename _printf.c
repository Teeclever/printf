#include "main.h"

/**
  *_printf - A printf function that takes in agument
  *@format: an argument that takes char
  *Return: A return value of a printed chars
  */

int _printf(const char *format, ...)
{
	int i, x, value;
	int lenght = 0;
	va_list list;

	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			lenght++;
		}
		else if (format[i + 1] == 'c')
		{
			_putchar(va_arg(list, int));
			lenght++;
			i++;
		}

		else if (format[i + 1] == 's')
		{
			x = string(va_arg(list, char *));
			lenght += x;
			i++;
		}
		else if (format[i + 1] == '%')
		{
			_putchar('%');
			lenght++;
			i++;
		}
		else if (format[i + 1] == 'd' || format[i + 1] == 'i')
		{
			value = integer_print(va_arg(list, int));
			lenght++;
			i++;
		}
	}
	va_end(list);
	return (lenght);
}
