#include <stdio.h>
/**
 * _abs - Computes the absolute value
 *
 * @n: integer
 *
 * Return: result
 */

int _abs(int n)
{
	int result;

	if (n == 0)
		result = 0;
	if (n < 0)
		result = n * (-1);
	if (n > 0)
		result = n;
	return (result);
}
