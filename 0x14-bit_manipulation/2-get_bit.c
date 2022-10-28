#include "main.h"
/**
 * get_bit - returns the value of a bit at a givent index.
 * @n: number int 10 base
 * @index: index
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int l;

	unsigned long int m = n;

	unsigned int i = 0;

	int *arry;

	while
		(n != 0) {
			n = n / 2;
			i++;
		}
	arry = malloc(sizeof(int) * (i));
	if (arry == NULL)
		return (-1);
	l = m % 2;
	i = 0;
	while
		(m != 0) {
			arry[i] = l;
			m = m / 2;
			l = m % 2;
			i++;
		}
	if (index > (i - 1))
		return (-1);
	l = arry[index];
	free(arry);
	return (l);
}
