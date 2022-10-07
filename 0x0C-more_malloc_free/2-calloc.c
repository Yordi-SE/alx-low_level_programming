#include "main.h"
/**
 * _calloc - allocates memory of an array
 * @nmemb: nmemb
 * @size: size
 * Return: void *
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *d;

	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	d = malloc(nmemb * size);
	if (d == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		d[i] = 0;
	return (d);
}
