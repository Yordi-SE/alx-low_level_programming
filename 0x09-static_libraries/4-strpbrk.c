#include "main.h"
/**
 * _strpbrk - locates a character in a string.
 * @s: character string
 * @accept: accept
 * Return: c
 */
char *_strpbrk(char *s, char *accept)
{

	int j;

	int y;

	int m;

	int l;

	int o = _strlen(accept);

	int u = _strlen(s);

	for (m = 0; m <= u; m++)
	{
		for (j = 0; j <= o; j++)
		{
			if (s[m] == accept[j])
			{
				break;
			}
			else
			{
				l = j;
				y = m;
			}
		}
		if (s[m] == accept[j])
			break;
	}
	if ((l == o) && (y == u))
		return (NULL);
	return ((s + m));
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
