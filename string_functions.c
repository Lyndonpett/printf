#include "holberton.h"

/**
 * func_revstr - prints a string in reverse.
 *
 * @list: the arguments passed.
 *
 * Return: number of characters.
 */

int func_revstr(va_list list)
{
	char *str;
	int count = 0, i, j = 0;

	str = va_arg(list, char *);
	for (i = 0; str[i] != 0; i++)
	{
		count++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(str[j]);
	}
	return (count);
}

/**
 * func_str_uppercase - prints a string when out of \x0A.
 *
 * @list: the arguments passed.
 *
 * Return: the number of characters.
 */

int func_str_uppercase(va_list list)
{
	char *strU;
	int i, count = 0;

	strU = va_arg(list, char *);
	for (i = 0; strU[i] != '\0'; i++)
	{
		if ((strU[i] > 0 && strU[i] < 32) || strU[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			_putchar('0');
			_putchar('A');
			count += 4;
		}
		else
		{
			_putchar(strU[i]);
			count++;
		}
	}
	return (count);
}
