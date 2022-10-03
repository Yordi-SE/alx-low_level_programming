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

	if ((height = width) <= 0 )
		return (NULL);

	m = malloc(sizeof(int) * width);
	d = malloc(sizeof(m) * height);
	if (d == NULL || m == NULL)
		return (NULL);
	for (j = 0; j < height; j++)
	{
		m = malloc(sizeof(int) * width);
		d[j] = m;
	}
	return (d);
}
