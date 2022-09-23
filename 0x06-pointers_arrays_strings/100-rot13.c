#include "main.h"

/**
 * rot13 - Encodes a string using rot13.
 * @str: The string
 *
 * Return: char
 */
char *rot13(char *str)
{
	int j;

	int i = 0;

	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	char d[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(str + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(str + i) == s[j])
			{
				*(str + i) = d[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
