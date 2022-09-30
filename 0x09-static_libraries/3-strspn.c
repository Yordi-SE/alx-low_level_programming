#include "main.h"
/**
 * _strspn - gets thelength of a prefix substring
 * @s: string
 * @accept: accept
 *Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	int j;

	int m = 0;

	int u = _strlen(accept);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] != accept[j])
			{
				m = j;
			}
			else if (s[i] == accept[j])
				break;
		}
		if (m == u - 1)
		{
			break;
		}
	}
	if (m != u - 1)
		return (0);
	return (i);
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
