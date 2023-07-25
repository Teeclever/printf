#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>


#define NULL_STRING "(null)"
#define NUL '\0'

/**
 * struct params - A defines a structure for symbols and functions
 *
 * @stmr An operator
 * @point: A function
 */

struct params
{
	char *str;
	int (*point)(va_list);
};
typedef struct params covert;



int _printf(const char *format, ...);
int _putchar(char c);
int operate(const char *format, covert f_list[], va_list arg_list);
int printchar(va_list args);
int stringchar(va_list args);
int percent(va_list);
int integer(va_list);
int _String(va_list);
int print_binary(va_list);
int print_unsigned_integer(va_list);
int print_octal(va_list list);
int hexa(va_list args);
int hex_aux(unsigned long int num);
int print_HEX(va_list args);
int pointerhex(va_list val);
int print_rev(va_list l);
int print_rot13(va_list args);
int integers(va_list args);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int n);
int hex_check(int num, char x);

int isNonAlphaNumeric(char c); 
int _puts(char *str);
char *convert(unsigned long int num, int base, int lowercase);
#endif

