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

	if (s1[0] == s2[0])
		r = 0;
	else if ((s1[0] < s2[0]) || (s1[0] > s2[0]))
		r = ((s1[0] - '0') - (s2[0] - '0'));
	return (r);
}
