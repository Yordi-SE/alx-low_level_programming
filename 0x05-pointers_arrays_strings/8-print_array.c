#include "main.h"
/**
 * print_array - print n elements of an array of integers
 *
 * @a: array
 *
 * @n: array size
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(a + i) >= 0)
			_putchar(*(a + i) + '0';

		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
