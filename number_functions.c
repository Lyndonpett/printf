#include "holberton.h"

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
