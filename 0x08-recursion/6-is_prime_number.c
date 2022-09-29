#include "main.h"
/**
 * _prime_number - returns prime numb
 * @n: n
 * @f: f
 * Return: void
 */
int _prime_number(int n, int f)
{
	if (n == 1 || n <= -1)
		return (0);
	else if (n == 0)
		return (0);
	else if (n == 2)
	{
		return (3);
	}
	else if (n % 2 == 0)
		return (0);
	else if (n % f == 0 && n != f)
		return (2 + _prime_number(n, f + 1));
	else if (n != f)
		return (_prime_number(n, f + 1));
	return (2);
}
/**
 * is_prime_number - returns prime numb
 * @n: n
 * Return: void
 */
int is_prime_number(int n)
{
	int *q;

	int f = 2;

	int r;

	q = &f;
	r = _prime_number(n, *q);
	if (r == 2)
		return (1);
	return (0);
}
