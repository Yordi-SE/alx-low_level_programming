#include "main.h"
/**
 * _strncpy - copy string
 * @dest: sring
 * @src: string
 * @n: inte
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[j] = src[j];
	}
	dest[j] = src[j];
	return (dest);
}
