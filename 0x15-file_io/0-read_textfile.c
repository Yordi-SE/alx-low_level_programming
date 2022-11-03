#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the posix standard output.
 * @filename: name  of the file
 * @letters: the number ot letters it should read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	size_t j;

	ssize_t i = 1;

	char *d;

	if (filename == NULL)
		return (0);
	for (j = 0; filename[j] != 0 && j < letters; j++)
		;
	i = j;
	d = malloc(sizeof(char) * (j));
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read(fd, d, j);
	d[j + 1] = '\0';
	close(fd);
	for (j = 0; d[j] != '\0'; j++)
		write(1, &d[j], 1);
	free(d);
	return (i);
}
