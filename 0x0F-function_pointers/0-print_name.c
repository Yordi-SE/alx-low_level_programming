#include "function_pointers.h"
#include "main.h"
/**
 * print_name - prints a name
 * @name: string
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		(*f)(name);
}
