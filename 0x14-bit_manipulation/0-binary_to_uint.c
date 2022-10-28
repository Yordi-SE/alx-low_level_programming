#include "main.h"
/**
 * binary_to_uint - convers a binary number to an unsigned int
 * @b: character string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = _strlen(b);

	int j;

	unsigned int h = 0;

	unsigned int m = 0;

	if (b == NULL || i == 0)
		return (0);
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '0')
		{
			m++;
		}
		else if (b[j] == '1')
		{
			h = h + (mult(m));
			m++;
		}
		else
			return (0);
	}
	return (h);
}
/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen(const char *s)
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
/**
 * mul - power
 * @n: number
 * Return: int
 */
unsigned int mult(unsigned int n)
{
	unsigned int h = 2;

	unsigned int i;

	if (n == 0)
		return (1);
	for (i = 1; i < n; i++)
		h *= 2;
	return (h);
}
