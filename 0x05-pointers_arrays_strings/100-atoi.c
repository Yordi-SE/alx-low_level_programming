#include "main.h"
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int y = _strlen(s);

	int i;

	int m = 0;

	char tmp;

	int l;

	int j;

	for (i = 0; i < y; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if (s[i] != j)
			{
				*(s + i) = tmp;
				m++;
			}
			else if (s[i] == j && s[i - 1] == '-')
				continue;
		}
	}
	if (m == y - 1)
		return (0);
	l = (s - '0');
	return (l);
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
