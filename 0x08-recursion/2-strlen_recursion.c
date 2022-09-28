#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * Return: int
 * @s: string
 */
int _strlen_recursion(char *s)
{
	if (*s && *s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
