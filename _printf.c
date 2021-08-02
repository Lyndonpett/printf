#include "holberton.h"
/**
  * _printf - prints whatever is given to it.
  *
  * @format: the format of what needs to be printed.
  *
  * Return: The number of characters printed.
  */

int _printf(const char *format, ...)
{
	st_fmt st_format[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_percent},
		{"d", func_digit},
		{"i", func_digit},
		{"b", func_binary},
		{NULL, NULL}
	};

	va_list list;
	int count = 0;

	va_start(list, format);
	count = get_function(format, list, st_format);
	va_end(list);
	return (count);
}
