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

	char tmp2;

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
			if (k > j)
				break;
			tmp2 = *(s + k);
			tmp = *(s + j);
			*(s + k) = tmp;
			*(s + j) = tmp2;
		}
		m++;
	}
}
