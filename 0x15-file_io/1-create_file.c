#include "main.h"

/**
 * create_file - craetes a file if it doesn't exist.
 * @filename: pointer to the file to be created.
 * @text_content: pointer to data or text to write to the file.
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, written_d, bytes = 0;

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[bytes] != '\0')
			bytes++;

		written_d = write(file_d, text_content, bytes);
		if (written_d == -1)
		{
			close(file_d);
			return (-1);
		}
		close(file_d);
	}
	return (1);
}
