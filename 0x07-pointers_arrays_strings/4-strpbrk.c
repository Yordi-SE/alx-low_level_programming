#include "main.h"
/**
 * _strpbrk - locates a character in a string.
 * @s: character string
 * @c: character to be located
 * Return: c
 */
char *_strpbrk(char *s, char *accept)
{

	int j;

	int m;

	int l;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[m] == accept[j])
			{
				break;
			}
			else
				l++;
		}
		if (s[m] == accept[j])
			break;
	}
	return ((s + m));
}
