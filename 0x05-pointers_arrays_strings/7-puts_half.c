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

	int i = 1;

	int result = 0;

	char r = *str;

	while
		(r != '\0') {
		result++;
		r = *(str + i);
		i++;
		}
	for (j = 0; *(str + j) != '\0'; j++)
	{
		if (j < (result / 2))
			continue;
		else
			_putchar(*(str + j));
	}
	_putchar('\n');
}

