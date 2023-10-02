#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Start of function
 *			that appends text at the end of a file.
 * @filename: The name file
 * @text_content: The text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t t_w, i;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
			i++;

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
