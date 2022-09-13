#include <stdio.h>
#include "main.h"
#include <limits.h>
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
	else if (n >= 0 && n <= 9)
		result = n;
	else if (n < -9 && n > INT_MIN)
		result = (n * (-1)) % 10;
	else if (n == INT_MIN)
		result = 0;
	else
		result = n % 10;
	_putchar(result + '0');
	return (result);
}
