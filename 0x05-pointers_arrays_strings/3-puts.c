#include "main.h"
/**
 * _puts - print string to the stdout
 *
 * @str: string
 *
 * Return: void
 */
void _puts(char *str)
{
	int i = 1;

	char r = *str;

	while
		(r != '\0') {
		_putchar(r);
		r = *(str + i);
		i++;
	}
	_putchar('\n');
}
