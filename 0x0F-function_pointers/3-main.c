#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
/**
 * main - Entry
 * Return: int
 * @argc: argument vector
 * @arg: argument count
 */
int main(int argc, char **arg)
{
	int a;

	int b;

	op_t t;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(arg[2], "/") == 0 || strcmp(arg[2], "%") == 0)
			&& strcmp(arg[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(arg[1]);
	b = atoi(arg[3]);
	t.f = get_op_func(arg[2]);
	if (t.f == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%i\n", t.f(a, b));
	return (0);
}
