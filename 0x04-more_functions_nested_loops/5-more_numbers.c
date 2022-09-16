#include "main.h"
/**
 * more_numbers - print more numbers
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;

	int k;

	int r;

	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}
		for (k = 0; k < 10; k++)
		{
			if (k == 0 || k == 2 || k == 3 || k == 4)
				r = 1;
			else if (k == 1)
				r = 0;
			else if (k == 5)
				r = 2;
			else if (k == 6)
				r = 1;
			else if (k == 7)
				r = 3;
			else if (k == 8)
				r = 1;
			else if (k == 9)
				r = 4;
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}
