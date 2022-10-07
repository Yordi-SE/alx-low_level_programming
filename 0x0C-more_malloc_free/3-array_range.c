#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: minimum value.
 * @max: maximum value.
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *d;

	int i;

	if (min > max)
		return (NULL);
	d = malloc(sizeof(*d) * ((max - min) + 1));
	if (d == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		d[i] = min;

	return (d);
}
