#include "main.h"
/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int r;

	int i;

	int m = 0;

	for (i = 0; (s1[i] != '\0') || (s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
			m++;
	}
	if (m == 0)
		r = 0;
	else
		r = ((s1[0] - '0') - (s2[0] - '0'));
	return (r);
}
