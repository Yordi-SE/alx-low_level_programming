#include <stdio.h>
/**
 * _isdigit - check for digits
 *
 * @c: digits or characters
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	int r;

	if (c >= '0' && c <= '9')
		r = 1;
	else
		r = 0;
	return (r);
}
