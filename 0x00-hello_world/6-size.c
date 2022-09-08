#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	int k;

	long int m;

	long long int n;

	float t;

	printf("size of a char: %c byte(s)\n", (unsigned char)sizeof(i));
	printf("size of an int: %d byte(s)\n", (unsigned int)sizeof(k));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("size of a long long int: %llu byte(s)\n", (unsigned long long)
			sizeof(n));
	printf("size of a float: %1.0f byte(s)\n", (double)sizeof(t));
	return (0);
}
