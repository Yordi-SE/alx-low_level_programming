#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;

	char *t;

	int m = 0;

	int j = 0;

	va_start(ap, format);

	while
		(*(format + j) != '\0') {
			switch (*(format + j))
			{
				case 'c':
					printf("%c", va_arg(ap, int));
					*(format + (j + 1)) != '\0'
					? printf(", ") : m;
					break;
				case 'i':
					printf("%i", va_arg(ap, int));
					*(format + (j + 1)) != '\0'
					? printf(", ") : m;
					break;
				case 'f':
					printf("%f", va_arg(ap, double));
					*(format + (j + 1)) != '\0'
					? printf(", ") : m;
					break;
				case 's':
					t = va_arg(ap, char *);
					t != NULL ? printf("%s", t) : printf("(nil)");
					*(format + (j + 1)) != '\0'
					? printf(", ") : m;
					break;
			}
			j++;
		}
	printf("\n");
	va_end(ap);
}
