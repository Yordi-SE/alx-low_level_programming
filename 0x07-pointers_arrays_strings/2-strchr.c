#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: character string
 * @c: character to be located
 * Return: c
 */
char *_strchr(char *s, char c)
{

	int i = 1;

	int m;

	int result = 0;

	char r = *s;

	int l = 0;

	while
		(r != '\0') {
		result++;
		r = *(s + i);
		i++;
		}
	for (m = 0; m <= result; m++)
	{
		if (s[m] == c)
		{
			break;
		}
		else
			l++;
	}
	return ((s + m));
}
