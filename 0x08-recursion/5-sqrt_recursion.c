#include "main.h"
/**
* is_square_root - A function that confirms the natural
* square root of an input
* @m: the function accepts an input saved into n
* @i: the function accepts an input saved into i
* Return: int
*/
int is_square_root(int m, int i)
{
	if ((i * i) == m)
	{
		return (i);
	}
	else if (i == m / 2)
	{
		return (-1);
	}
	return (is_square_root(m, i + 1));
}
/**
* _sqrt_recursion - A function that returns the
* natural square root of a number
* @n: the function accepts an input saved into n
* Return: int
*/
int _sqrt_recursion(int n)
{
	int squared = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (is_square_root(n, squared));
}
