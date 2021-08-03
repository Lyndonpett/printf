#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct st_fmt - structure for formatting printf.
 *
 * @fmt: the format for the structure.
 * @func: the function to use.
 *
 */

typedef struct st_fmt
{
	char *fmt;
	int (*func)(va_list list);
} st_fmt;

int _printf(const char *format, ...);
int _putchar(char c);
int func_char(va_list list);
int func_string(va_list list);
int func_percent(va_list list);
int get_function(const char *format, va_list list, st_fmt st_format[]);
int func_digit(va_list list);
int func_converter(unsigned int num, int base, int flag);
int func_binary(va_list list);
int func_unsigned(va_list list);
int func_octal(va_list list);
int func_hex_lower(va_list list);
int func_hex_upper(va_list list);
int func_revstr(va_list list);
int func_str_uppercase(va_list list);

#endif /* HOLBERTON_H */
