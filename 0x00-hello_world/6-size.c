#include <stdio.h>

int main(void)
{
	char i;
	int k;
	long int m;
	long long int n;
	float t;
	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("size of an int: %d byte(s)\n", (unsigned)sizeof(k));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("size of a long long int: %llu byte(s)\n", (long long unsigned)sizeof(n));
	printf("size of a float: %1.0f byte(s)\n",(double)sizeof(t));
	return (0);
}
