#include <stdio.h>
/**
 * _islower - checks for lower case character
 *
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}
