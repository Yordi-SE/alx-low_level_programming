#include "main.h"
/**
 * print_diagonal - print line
 *
 * @n: integer
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	int m = 0;

	int r;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (r = 0; r < m; r++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
			m++;
		}
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
