#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: string
 *
 *Return: char
 */
char *cap_string(char *str)
{
	int i;

	int u;

	char tmp;

	int j;

	char st[14] = {' ', '\n', '\t', ',', ';', '.', '!',
		'?', '\"', '(', ')', '{', '}'};

	int y = _strlen(str);

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == st[j])
			{
				if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
				{
					u = (str[i + 1] - '0') - 32;
					tmp = u + '0';
					str[i + 1] = tmp;
				}
				else
					continue;
			}
		}
	}
	return (str);
}
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
