#include "main.h"
/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: char
 */
char *leet(char *str)
{
	char s[6] = {'a', 'e', 'o', 't', 'l'};

	char x[6] = {'A', 'E', 'O', 'T', 'L'};

	char d[5] = {'4', '3', '0', '7', '1'};

	int i;

	int j;

	int y = _strlen(str);

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == s[j] || str[i] == x[j])
				str[i] = d[j];
		}
	}
	return (str);
}
#include "main.h"
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
