#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n : n bytes
 * Return: char *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *d;

	char *f;

	unsigned int i;

	unsigned int m;

	if (s2 == NULL)
	m = 0;
	else
		m = _strlen(s2);
	if (n < m)
	{
		f = malloc(sizeof(char) * n + 1);
		for (i = 0; i < n; i++)
			f[i] = s2[i];
		f[i] = '\0';
		d = str_concat(s1, f);
	}
	else
		d = str_concat(s1, s2);
	return (d);
}
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
