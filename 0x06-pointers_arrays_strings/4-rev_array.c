#include "main.h"
/**
 * reverse_array - reverse array
 *
 * @a: array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	int tmp;

	int tmp1;

	int y = n - 1;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[y - i])
			break;
		else if (a[i] != a[y - i])
		{
			tmp = a[i];
			tmp1 = a[y - i];
			a[i] = tmp1;
			a[y - i] = tmp;
		}
	}
}
