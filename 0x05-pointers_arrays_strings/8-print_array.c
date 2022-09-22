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

	char x;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	x = '\n';
	printf("%c", x);
}
