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

	int r;

	int result;

	for (r = 3; r < i; r++)
	{
		if (i % r != 0)
			continue;
		if ((i % r == 0) && (r % 2 != 0))
			result = r;
	}
	printf("%d", result);
	putchar('\n');
	return (0);
}
