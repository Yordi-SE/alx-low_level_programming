#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: string
 * @src: string
 * @n: byte size
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;

	int i = 1;

	int result = 0;

	char r = *dest;

	while
		(r != '\0') {
		result++;
		r = *(dest + i);
		i++;
		}
	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[result] = src[j];
		result++;
	}
	return (dest);
}
