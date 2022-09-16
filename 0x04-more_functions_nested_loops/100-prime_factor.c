#include "main.h"
#include <limits.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	long int i = 612852475143;

	long int r;

	long int result;

	for (r = 3; r < i; r++)
	{
		if (i % r != 0)
			continue;
		if ((i % r == 0) && (r % 2 != 0))
			result = r;
	}
	printf("%ld", result);
	putchar('\n');
	return (0);
}
