#include "main.h"
/**
 * main - Entry
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) *argv[])
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	if (argc == 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	return (0);
}
