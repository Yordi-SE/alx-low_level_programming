#include <limits.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
#define NUM 6128

	unsigned long r;

	unsigned long result;

	for (r = 3; r < NUM; r++)
	{
		if (NUM % r != 0)
			continue;
		if ((NUM % r == 0) && (r % 2 != 0))
			result = r;
	}
	printf("%lu", result);
	putchar('\n');
	return (0);
}
