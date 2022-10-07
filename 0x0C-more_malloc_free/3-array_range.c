#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: int *
 */
int *array_range(int min, int max)
{
	int *d;

	int i;

	if (min > max)
		return (NULL);
	d = malloc((max * sizeof(int)) + 1);
	if (d == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
		d[i] = i;
	return (d);
}
