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
	int result = n % 10;

	if (result < 0)
		result *= -1;
	_putchar(result + '0');
	return (result);
}
