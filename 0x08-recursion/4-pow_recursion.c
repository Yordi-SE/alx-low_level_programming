#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * Return: int
 * @x: base
 * @y: exponent
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (x < 0 && y % 2 != 0)
		return (x * _pow_recursion(x, y - 1));
	return (x * _pow_recursion(x, y - 1));
}
