#include "holberton.h"

/**
 * func_converter - converts to hex, bin, and or octal.
 *
 * @num: the number
 * @base: the base the number needs to be tranformed to.
 * @flag: the checks for null
 *
 * Return: the characters printed.
 */

int func_converter(unsigned int num, int base, int flag)
{
	char hexUp[] = "0123456789ABCDEF";
	char hexLower[] = "0123456789abcdef";
	char array[2021];
	char *ptr;
	int i = 2020, j = 0;

	ptr = &array[2020];
	*ptr = '\0';

	do {
		if (flag != 0)

			*--ptr = hexUp[num % base];

		else

			*--ptr = hexLower[num % base];

		num = num / base;
		i--;
	} while (num != 0);

	for (j = i; array[j] != '\0'; j++)
	{
		_putchar(array[j]);
	}
	return (2020 - i);
}
