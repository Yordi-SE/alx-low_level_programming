#include <stdio.h>
/**
 * _isupper - checks for the upper case characters
 *
 * @c: character
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	int result;

	if (c >= 'A' && c <= 'Z')
		result = 1;
	else
		result = 0;
	return (result);
}
