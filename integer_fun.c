#include "main.h"

/**
  *integer_print - is a function the print int
  *@value: takes int
  *Return: int
  */

int integer_print(int value)
{
	char buff[32];
	int print = 0;
	int i = 0;


	if (value < 0)
	{
		_putchar('-');
		print++;
		value = -value;
	}
	do {
		buff[i++] = '0' + (value % 10);
		value /= 10;
		print++;
	} while (value > 0);

	for (int j = i - 1; j >= 0; j--)
	{
		_putchar(buff[j]);
	}
return (print);
}
