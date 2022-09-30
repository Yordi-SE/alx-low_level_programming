#include "main.h"
/**
 * _strcat - concatenate string
 * @dest: string
 * @src: string
 * Return: char
 */
char *_strcat(char *dest, char *src)
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
	for (j = 0; *(src + j) != '\0'; j++)
	{
		*(dest + result) = *(src + j);
		result++;
	}
	return (dest);
}
