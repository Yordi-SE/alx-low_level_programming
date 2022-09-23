#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int h;

	int k;

	int j;

	int w[2];

	int m = _strlen(s1);

	int n = _strlen(s2);

	int l = 0;

	if (m < n)
	{
		for (j = 0; j <= m; j++)
		{
			if (s1[j] == s2[j])
				h = 0;
			else if (s1[j] != s2[j])
			{
				w[l] = j;
				l = 1;
			}
		}
	}
	if (m >= n)
	{
		for (k = 0; k <= n; k++)
		{
			if (s1[k] == s2[k])
				h = 0;
			else if (s1[k] != s2[k])
			{
				w[l] = k;
				l = 1;
			}
		}
	}
	if (l == 1)
		h = ((s1[w[0]] - '0') - (s2[w[0]] - '0'));
	return (h);
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
