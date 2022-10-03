#include "main.h"
/**
 * _strdup - returns a pointer to a 
 * newly allocated space in memory,
 * which contains a copy of the string given
 * @str: string
 * Return: char *
 */
char *_strdup(char *str)
{
	int i;

	char *d = malloc(sizeof(str));
	if (d == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		d[i] = str[i];
	}
	d[i] = str[i];
	return (d);
}
