#include "main.h"
#include "main.h"

/**
 * hex_aux - a program prints an hexgecimal number.
 * @num: arguments.
 * Return: counter-value.
 */

int hex_aux(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	for (; num / 16 != 0; counter++)
	{
		num /= 16;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (counter);
}
