#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int a;

	int b;

	a = 0;
	b = 1;
	while
		(a < 9) {
			while
				(b < 10) {
					putchar(a + '0');
					putchar(b + '0');
					if (a != 8 && b != 9)
					{
						putchar(',');
						putchar(' ');
					}
					b++;
				}
			a++;
		}
	putchar('\n');
	return (0);
}
