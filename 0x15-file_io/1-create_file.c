#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Start of function that creates a file
 * @filename: The file name
 * @text_content: The text
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t t_w, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	i = 0;
	while (text_content[i])
		i++;
	if (i)
	{
	t_w = write(file, text_content, i);
	if (t_w == -1)
	{
		close(file);
		return (-1);
	}
	}
	close(file);
	return (1);
}
