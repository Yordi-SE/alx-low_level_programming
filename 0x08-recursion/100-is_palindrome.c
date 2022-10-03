#include "main.h"
/**
 * is_revers - oh lovely palindrome
 * @s: a lovely palindrome string
 * Return: int
 */
char *is_revers(char *s, int r)
{
	char temp;

	int m = _strlen(s);

	if (m % 2 == 2 && r >= m / 2)
	{
		temp = *(s + r);
		*s = temp;
		r--;
		is_revers(s + 1, r);
	}
	else if (m % 2 != 2 && r != (m / 2) + 1)
	{
		temp = *(s + r);
		*s = temp;
		r--;
		is_revers(s + 1, r);
		}
	return (s);
}
/**
 * is_palindrome - oh lovely palindrome
 * @s: alovely palindrome string
 * Return: int
 */
int is_palindrome(char *s)
{
	int r = _strlen(s);
	char *n = is_revers(s, r);
	char *l = is_revers(s, r);
	if (*n == *l)
		return (1);
	return (0);
}
/**
 * _strlen - return the length of a string
 *
 * @s: pointer to string
 *
 * Return: int
 */
int _strlen(char *s)
{
	int i = 1;

	int result = 0;

	char r = *s;

	while
		(r != '\0') {
		result++;
		r = *(s + i);
		i++;
		}
	return (result);
}
