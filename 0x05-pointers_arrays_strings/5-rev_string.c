#include "main.h"
/**
 * rev_string - reverse the string
 *
 * @s: pointer to string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i = 1;

	int j;

	int k;

	int m = 1;

	char tmp;

	int result = 0;

	char r = *s;

	while
		(r != '\0') {
		result++;
		r = *(s + i);
		i++;
		}
	for (j = result - 1; j >= 0; j--)
	{
		for (k = m - 1; k < m; k++)
		{
			if (*(s + j) == *(s + k))
				break;
			tmp = *(s + j);
			*(s + j) = *(s + k);
			*(s + k) = tmp;
		}
		m++;
	}
	putchar('\n');
}
