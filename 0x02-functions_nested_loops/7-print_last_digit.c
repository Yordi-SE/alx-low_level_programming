#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - print last digit of a number
 *
 * @n: number
 *
 * Return: result
 */
int print_last_digit(int n)
{
	int result;

	if (n < 0)
		result = (n * (-1)) % 10;
	if (n > 0)
		result = n % 10;
	if (n == 0)
		result = 0;
	_putchar(result + '0');
	return (result);
}
