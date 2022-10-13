#include "main.h"
#include "function_pointers.h"
/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	int *q;

	int *p;

	if (action)
	{
		q = array;
		for (i = 0, q = q; i < size; i++, q++)
		{
			p = q;
			if ((q + 1) - q == 1)
			{
				action(array[i]);
				q = p;
			}
			else if (q - (q - 1) == 1)
				action(array[i]);
			else
				break;
		}
	}
}
