#include "main.h"
/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	int j;

	int tmp2 = 0;

	int tmp;

	if (argc != 1)
	{
		for (j = 1; j < argc; j++)
		{
			if (atoi(argv[j]) == 0 && strcmp(argv[j], "0") != 0)
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		for (i = 0; i < argc - 1; i++)
		{
			tmp = tmp2 + atoi(argv[i + 1]);
			tmp2 = tmp;
		}
	}
	if (argc == 1)
		printf("%d\n", 0);
	if (argc != 1)
		printf("%d\n", tmp2);
	return (0);
}
