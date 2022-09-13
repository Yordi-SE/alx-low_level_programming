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

	if (n < 0 && n >= -9)
		result = n;
	if (n >= 0 && n <= 9)
		result = n;
	if (n < -9)
		result = (n * (-1)) % 10;
	if (n > 9)
		result = n % 10;
	_putchar(result + '0');
	return (result);
}
