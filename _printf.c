#include "main.h"

/**
  *_printf - A printf function that takes in agument
  *@format: an argument that takes char
  *Return: A return value of a printed chars
  */

int _printf(const char *format, ...)
{
	int printed;

	covert functions[] = {
		{"i", integer},
		{"c", printchar},
		{"s", stringchar},
		{"%", percent},
		{"d", integer},
		{"u", print_unsigned_integer},
		{"b", print_binary},
		{"o", print_octal},
		{"x", hexa},
		{"X", print_HEX},
		{"S", _String},
		{"p", pointerhex},
		{"r", print_rev},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	printed = operate(format, functions, args);
	va_end(args);
	return (printed);
}
