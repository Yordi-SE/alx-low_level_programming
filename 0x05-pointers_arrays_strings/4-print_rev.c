#include "main.h"
/**
 * print_rev - print string in reverse
 *
 * @s: pointer to char
 *
 *Return: void
 */
void print_rev(char *s)
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
	for (i = result - 1; i >= 0; i--)
	{
		r = *(s + i);
		if (r != '\0')
			_putchar(r);
	}
	_putchar('\n');
}
