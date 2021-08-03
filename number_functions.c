#include "holberton.h"

/**
 * func_unsigned - prints unsigned integers.
 *
 * @list: the list of arguments passed.
 *
 * Return: number of characters to be printed.
 */

int func_unsigned(va_list list)
{
	unsigned int m, number;
	int i, k, count = 0;

	number = va_arg(list, unsigned int);
	if (number == 0)
	{
		_putchar(number + '0');
		count++;
	}
	else if (number > UINT_MAX)
	{
		m = number - UINT_MAX - 1;
		_putchar(number + '0');
		count++;
	}
	else if (number <= UINT_MAX)
	{
		m = number;
		for (k = 0; (m / 10); k++)
		{
			m /= 10;
		}
		m = number;
		while (k != 0)
		{
			for (i = 0; i < k; i++)
			{
				m /= 10;
			}
			m %= 10;
			_putchar(m + '0');
			count++;
			k--;
			m = number;
		}
		_putchar(m % 10 + '0'), count++;
	}
	else
	{
		m = (UINT_MAX + 1) - number;
		_putchar(m + '0'), count++;
	}
	return (count);
}

/**
 * func_binary - prints binary characters
 *
 * @list: the arguments passed.
 *
 * Return: the number in binary.
 */
int func_binary(va_list list)
{
	int num_size = 0, num = 0, base = 2, flag = 0;

	num = va_arg(list, unsigned int);
	num_size = func_converter(num, base, flag);
	return (num_size);
}

/**
 * func_octal - convert to octal
 *
 * @list: the arguments passed
 *
 * Return: the number size.
 */

int func_octal(va_list list)
{
	int num_size = 0, num = 0, base = 8, flag = 0;

	num = va_arg(list, unsigned int);
	num_size = func_converter(num, base, flag);
	return (num_size);
}

/**
 * func_hex_lower - converts to lowercase hex.
 *
 * @list: the arguments passed.
 *
 * Return: the number size.
 */

int func_hex_lower(va_list list)
{
	int num_size = 0, num = 0, base = 16, flag = 0;

	num = va_arg(list, unsigned int);
	num_size = func_converter(num, base, flag);
	return (num_size);
}

/**
 * func_hex_upper - converts to uppercase hex.
 *
 * @list: the arguments passed.
 *
 * Return: the number size.
 */

int func_hex_upper(va_list list)
{
	int num_size = 0, num = 0, base = 16, flag = 1;

	num = va_arg(list, unsigned int);
	num_size = func_converter(num, base, flag);
	return (num_size);
}
