#include <stdio.h>
#include <stdlib.h>
int *u(int n, int *array)
{
	int i;
	int *d = malloc(sizeof(int) * n);
	for (i = 0; i < n; i++)
		d[i] = array[i];
	return (d);
}
int main(void)
{
	int *d = malloc(sizeof(int) * 5);
	printf("%lu\n", sizeof(*d) * 5);
	return (0);
}
