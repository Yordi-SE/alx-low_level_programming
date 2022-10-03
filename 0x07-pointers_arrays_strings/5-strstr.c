#include "main.h"
/**
 * _strstr -strstr
 * @haystack: hay
 * @needle: needle
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	int l;

	int m;

	int u = _strlen(haystack);

	int o = _strlen(needle);

	int j;

	for (m = 0; m < u; m++)
	{
		
		for (j = 0; j < o; j++)
		{
			if (haystack[m] == needle[j])
			{

				if (l >= j && j != 0)
					break;
				else
					q[j] = j;
			}
			else
			{
				continue;
			}
		if (l >= j)
		if (l == (o - 1))
			break;
	}
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
