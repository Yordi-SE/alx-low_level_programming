#include "main.h"
/**
 * _strcpy - copy string
 *
 * @dest: dest
 *
 * @src: src
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	int y = _strlen(src);

	int x = _strlen(dest);

	for (i = 0; i <= y; i++)
	{
		if (i > x)
		{
			x++;
			dest[i] = src[i];
		}
		else
			dest[i] = src[i];
	}
	return (dest);
}
#include "main.h"
/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 1;

	int result = 0;

	char r = *s;

	while
		(r != '\0') {
		result++;
		r = *(s + i);
		i++;
		}
	return (result);
}
