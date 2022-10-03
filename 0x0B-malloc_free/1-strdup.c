#include "main.h"
/**
 * _strdup - returns a pointer to a
 * newly allocated space in memory,
 * which contains a copy of the string given
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
	int i;

	char *d;

	if (str == NULL)
		return (NULL);
	d = malloc((sizeof(char) * _strlen(str)) + 1);
	if (d == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		d[i] = str[i];
	}
	d[i] = str[i];
	return (d);
}
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
