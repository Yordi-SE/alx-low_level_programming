#include "main.h"
/**
 * create_array - creates n array of chars,
 * and initializes it with a specific char.
 * @size: size
 * @c: specific char
 * Return: char *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *a;

	a = malloc(sizeof(char) * size);
	for (i = 0; i < size; i++)
	{
		a[i] = c;
	}
	if (a == NULL)
		return (NULL);
	return (a);
}
