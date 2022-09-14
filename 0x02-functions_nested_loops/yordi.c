#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i;

	int j;

	int k;

	int m;

	for (i = 0; i < 3; i++)
	{
		if (i < 2)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (m = 0; m < 10; m++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
		if (i == 2)
		{
			for (j = 0; j < 4; j++)
			{
				for (k = 0; k < 6; k++)
				{
					for (m = 0; m < 10; m++)
					{
						_putchar(i + '0');
						_putchar(j + '0');
						_putchar(':');
						_putchar(k + '0');
						_putchar(m + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
