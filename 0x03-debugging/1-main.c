#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);	/* oops the variable i have to be incremented */
	}
	/* to print integer with putchar pass the argument like this i + '0' */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
