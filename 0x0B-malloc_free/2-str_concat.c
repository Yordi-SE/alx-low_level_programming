#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * Return: char *
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	int j = 0;

	int r;

	char *d;

	if (s1 == NULL && s2 != NULL)
		s1 = "";
	else if (s2 == NULL && s1 != NULL)
		s2 = "";
	else if (s2 == NULL && s1 == NULL)
	{
		d = malloc(1);
		return (d);
	}
	r = (_strlen(s1) + _strlen(s2));
	if (r != 0)
		d = malloc((sizeof(char) * r) + 1);
	if (d == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
	{
		d[i] = s1[i];
	}
	for (i = _strlen(s1); i <= r; i++)
	{
		d[i] = s2[j];
		j++;
	}
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
