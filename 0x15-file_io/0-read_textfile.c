#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - Start of function that reads a
 *			text file and prints it to the POSIX standard output.
 * @filename: The file name
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t t_w, t_r;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	t_r = read(file, buffer, letters);
	t_w = write(STDOUT_FILENO, buffer, t_r);
	if (t_r == -1 && t_w == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file);
	return (t_r);
}
