#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - Print lower case alphabet
 *
 * Return: Always 0 (success)
 */

void print_alphabet(void)
{
	char c = 'a';

	while
		(c <= 'z') {
			_putchar(c);
			c++;
		}
	putchar('\n');
}
