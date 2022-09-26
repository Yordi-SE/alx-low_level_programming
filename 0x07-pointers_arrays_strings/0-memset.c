#include "main.h"
/**
 * _memset - fills memory with constant bytes
 * @s: buffer
 * @b: char
 * @n: size
 * Return: char *
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	int m = n;

	for (i = 0; i < m; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
