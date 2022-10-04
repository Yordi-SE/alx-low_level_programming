#include "main.h"
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: char *
 */
char *argstostr(int ac, char **av)
{
	char *d;

	int i;

	int l = 0;

	char *m;

	int j;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		d = malloc(sizeof(char) * (_strlen(av[i]) - 1) + 2);
	}
	if (d == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		m = malloc(sizeof(char) * (_strlen(av[i] - 1)));
		m = av[i];
		for (j = 0; j < _strlen(m); j++)
		{
			d[l + j] = m[j];
		}
		d[l + j] = '\n';
		l = l + j + 1;
	}
	return (d);
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
