#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers
 * @width: row
 * @height: column
 * Return: int **
 */
int **alloc_grid(int width, int height)
{
	int j;

	int **d;

	int *m;

	if (height <= 0 || width <= 0)
		return (NULL);
	d = malloc(sizeof(m) * (height));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (j = 0; j < height; j++)
	{
		m = malloc(sizeof(int) * (width));
		if (m == NULL)
		{
			return (NULL);
		}
		d[j] = m;
	}
	return (d);
}
