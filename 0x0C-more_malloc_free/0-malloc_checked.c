#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes
 * Return: void *
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);
	if (d == NULL)
		exit(98);
	return (d);
}
