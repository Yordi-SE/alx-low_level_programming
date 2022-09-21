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
	int i;

	char r = *str;

	for (i = 0; r != '\0'; i++)
	{
		r = *(str + i);
		_putchar(r);
	}
	_putchar('\n');
}
