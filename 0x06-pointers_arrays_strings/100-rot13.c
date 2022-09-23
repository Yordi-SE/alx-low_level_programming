#include "main.h"
/**
 * rot13 - rot by 13 places
 * @str: string
 * Return: char
 */
char *rot13(char *str)
{
	char s[53] = {'a', 'b', 'c',
		'd', 'e', 'f', 'g',
		'h', 'i', 'j', 'k', 'l',
		'm', 'n', 'o', 'p',
		'q', 'r', 's', 't', 'u',
		'v', 'w', 'x', 'y', 'z',
		'A', 'B', 'C',
		'D', 'E', 'F', 'G',
		'H', 'I', 'J', 'K',
		'L', 'M', 'N', 'O', 'P',
		'Q', 'R', 'S', 'T', 'U',
		'V', 'W', 'X', 'Y', 'Z'};
	int tmp;

	char tmp3;

	int tmp2;

	for (i = 0; i < y; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == s[j] && j >= 36)
			{
				tmp = (s[f[l]][j] - '0');
				tmp2 = tmp + 13;
				tmp3 = tmp2 + '0';
				str[i] = tmp3;
			}
			else

		}
	}
	return (str);
}
