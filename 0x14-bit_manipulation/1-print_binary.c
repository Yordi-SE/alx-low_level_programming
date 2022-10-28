#include "main.h"
/**
 * print_binary - prints the binary reptresentatiron of a number.
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int m;

	unsigned int s = 0;

	unsigned int i;

	unsigned long int t;

	unsigned long int l;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}
	t = _ret(n);
	m = ret(n);
	_putchar(1 + '0');
	l = n - t;
	if (l == 0)
		for (i = 1; i < m; i++)
			_putchar(0 + '0');
	for ( ; l > 0; )
	{
		t = _ret(l);
		s = ret(l);
		l = l - t;
		if (m - s == 1)
			_putchar(1 + '0');
		else
		{
			for (i = 1; i < m - s; i++)
				_putchar(0 + '0');
			_putchar(1 + '0');
		}
		m = s;
	}
	((t > 2) && (s != 0)) ? (unsigned long int) _putchar(0 + '0') : t;
	if (t != 1)
		_putchar(0 + '0');
}
/**
 * ret - return exponent value
 * @n: number
 * Return: unsigned int
 */
unsigned int ret(unsigned long int n)
{
	unsigned int m = 0;

	while
		(mul(m) <= n) {
			m++;
		}
	return (m - 1);
}
/**
 * _ret - return number raised to 2
 * @n: number
 * Return: unsigned int
 */
unsigned long int _ret(unsigned long int n)
{
	unsigned long int h = 1;

	unsigned int m = 0;

	unsigned long int tmp = 0;

	while
		(h <= n) {
			tmp = h;
			h = mul(m);
			m++;
		}
	return (tmp);
}
/**
 * mul - power
 * @n: number
 * Return: int
 */
unsigned long int mul(unsigned int n)
{
	unsigned long int h = 2;

	unsigned int i;

	if (n == 0)
		return (1);
	for (i = 1; i < n; i++)
		h *= 2;
	return (h);
}
