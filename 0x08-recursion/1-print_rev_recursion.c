#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * Return: void
 * @s: string
 */
void _print_rev_recursion(char *s)
{
	int r = _strlen(s) - 1;

	if (r == _strlen(s) - 1)
	{
		_putchar(*((s - 1) + r));
	}
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
