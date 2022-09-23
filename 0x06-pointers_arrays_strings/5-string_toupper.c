#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: string
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	int r;

	char tmp;

	int y = _strlen(str);

	for (i = 0; i < y; i++)
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')
		{
			r = (*(str + i) - '0') - 32;
			tmp = (r + '0');
			*(str + i) = tmp;
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
