#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments
 * @argv: arguments pointer
 * Return: int
 */
int main(int argc, char **argv)
{
	int fd;

	int s;

	int m;

	int fdd;

	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "cp file_from file_to\n");
		exit(97);
	}
	fdd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdd == -1)
	{
		dprintf(2, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can\'t read from file %s\n", argv[1]);
		exit(98);
	}
	s = read(fd, buf, 1024);
	if (s == -1)
	{
		dprintf(2, "Error: Can\'t read from file %s\n", argv[1]);
		exit(98);
	}
	m = write(fdd, buf, s);
	if (m == -1)
	{
		dprintf(2, "Error: Can\'t write to %s\n", argv[2]);
		exit(99);
	}
	close(fdd);
	close(fd);
	return (0);
}
