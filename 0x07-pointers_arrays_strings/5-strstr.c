#include "main.h"
/**
 * _strstr -strstr
 * @haystack: hay
 * @needle: needle
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int y;

	int m;

	int u = _strlen(haystack);

	for (m = 0; m < u; m++)
	{
		if (haystack[m] == needle[0])
		{
			break;
		}
		else
		{
			y = m;
		}
	}
	if (y == u - 1)
		return (NULL);
	return ((haystack + m));
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
