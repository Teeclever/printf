#include "main.h"

/**
 * base_len - A function that calculates the length for an octal
 * @n: The number for which the length is being calculated
 * @base: Base
 * Return: An integer representing the length of a number
 */

unsigned int base_len(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
		n = n / base;
	return (i);
}

/**
 * rev_string - A program that reverse a string in place
 *
 * @s: string to reverse
 * Return: A pointer to a character
 */

char *rev_string(char *s)
{
	int len;
	int t;
	char tmp;
	char *dest;

	for (len = 0; s[len] != '\0'; len++)
	{
		dest = malloc(sizeof(char) * len + 1);
		if (dest == NULL)
			return (NULL);
	}

	_memcpy(dest, s, len);
	for (t = 0; t < len; t++, len--)
	{
		tmp = dest[len - 1];
		dest[len - 1] = dest[t];
		dest[t] = tmp;
	}
	return (dest);
}

/**
 * base - sends charaters to be written
 * @str: string to parse
 */

void base(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * _memcpy - memory area
 * @dest: destination
 * @src: dource of copy
 * @n: number of bytes to copy
 * Return: The _memcpy() function returns
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * hex_check - Checks which hex functions calling it
 * @num: Number to convert into letter
 * @x: hex function
 * Return: Ascii value
 */

int hex_check(int num, char x)
{
	char *hex = "abcdef";
	char *Hex = "ABCDEF";

	num = num - 10;
	if (x == 'x')
		return (hex[num]);
	else
		return (Hex[num]);
	return (0);
}
