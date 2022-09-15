#include "main.h"
/**
 * print_triangle - print triangle
 *
 * @size: size of triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;

	int j = 1;

	int k;

	int m;

	int r = size - 1;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (k = 0; k < r; k++)
			{
				_putchar(' ');
			}
			for (m = 0; m < j; m++)
				_putchar('#');
			_putchar('\n');
			r--;
			j++;
		}
	}
	else
		_putchar('\n');
}
