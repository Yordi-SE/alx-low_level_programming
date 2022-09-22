#include "main.h"
/**
 * puts_half - print half of string
 *
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int j;

	int x;

	int i = 1;

	int result = 0;

	char r = *str;

	while
		(r != '\0') {
		result++;
		r = *(str + i);
		i++;
		}
	x = result - 1;
	for (j = 0; *(str + j) != '\0'; j++)
	{
		if (j > (x / 2))
			_putchar(*(str + j));
	}
	_putchar('\n');
}

