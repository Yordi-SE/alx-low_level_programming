#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 - Print lower case alphabet 10x
 *
 * print lower case alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char c;

	int a = 0;

	while
		(a < 10) {
			c = 'a';
			while
				(c <= 'z') {
					_putchar(c);
					c++;
				}
			_putchar('\n');
			a++;
		}
}
