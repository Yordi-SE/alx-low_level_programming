#include "main.h"
/**
 * read_textfile - reads a text file and
 * prints it to the posix standard output.
 * @filename: name  of the file
 * @letters: the number ot letters it should read and print
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;

	char *d;

	ssize_t m;

	ssize_t s;

	if (filename == NULL)
		return (0);
	d = malloc(sizeof(char) * (letters));
	if ( d == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = read(fd, d, letters);
	if (s == -1)
		return (0);
	close(fd);
	m = write(1, d, s);
	if (m == -1)
		return (0);
	free(d);
	return (m);
}
