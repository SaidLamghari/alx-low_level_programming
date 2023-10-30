#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define RESUME1 (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)
/**
 * main - Start of the function that appends text at the end of a file.
 * @argc: Argument
 * @argv: Argument
 * Return: 1 on success and -1 on failure
 */
int main(int argc, char **argv)
{	int from_file = -1, to_file = -1;
	char buffer[1024];
	ssize_t t_r, t_w;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_file = open(argv[1], O_RDONLY);
if (from_file == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	to_file = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, RESUME1);
	if (to_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((t_r = read(from_file, buffer, sizeof(buffer))) > 0)
	{
		t_w = write(to_file, buffer, t_r);
		if (t_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
if (t_r == -1)
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);
	if (close(from_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_file), exit(100);
	if (close(to_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_file), exit(100);
	return (0);
}
