#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory are to copy into
 * @src: memory area to copy from
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	int m = n;

	for (i = 0; i < m; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
