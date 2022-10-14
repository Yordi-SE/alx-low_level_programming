#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: strings
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	char *t;

	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		t = va_arg(ap, char *);
		if (t != NULL)
			printf("%s", t);
		else
			printf("(nil)");
		if ((i != (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}
	printf("\n");
}
