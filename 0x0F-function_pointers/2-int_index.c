#include "main.h"
#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array
 * @size: size of an array
 * @cmp: pointer to function
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	int t;

	if (array && cmp && (size > 0))
	{
		for (i = 0; i < size; i++)
		{
			t = cmp(array[i]);
			if (t != 0)
				return (i);
		}
	}
	if (t == 0)
		return (-1);
	return (-1);
}
