#include <stdio.h>
#include "main.h"
/**
 * print_sign - print sign of integers
 *
 * @n: integer to be checked
 *
 * Return: 1 or 0 or -1
 */
int print_sign(int n)
{
	int result;

	if (n > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		result = -1;
	}
	if (n == 0)
	{
		_putchar('0');
		result = 0;
	}
	return (result);
}
