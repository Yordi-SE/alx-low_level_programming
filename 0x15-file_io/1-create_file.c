#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to wtrite to the file
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	int len;

	int s;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	len = _strlen(text_content);
	if (len != 0)
		s = write(fd, text_content, len);
	if (s ==  -1)
		return (-1);
	close(fd);
	return (1);
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
