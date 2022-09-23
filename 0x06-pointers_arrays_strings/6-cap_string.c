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

	int y = _strlen(str);

	for (i = 0; i < y; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
			continue;
		else if (str[i] <= 'Z' && str[i] >= 'A')
			continue;
		else if (str[i] <= '9' && str[i] >= '0')
			continue;
		else if (str[i] == '-' || str[i] == '_')
			continue;
		else
		{
			if (str[i + 1] <= 'z' && str[i + 1] >= 'a')
			{
				u = (str[i + 1] - '0') - 32;
				tmp = u + '0';
				str[i + 1] = tmp;
			}
		}
		if (str[i] == '\t')
			str[i] = ' ';
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
