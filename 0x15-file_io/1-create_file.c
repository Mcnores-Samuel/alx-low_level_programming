#include "main.h"

/**
 * create_file - craetes a file if it doesn't exist.
 * @filename: pointer to the file to be created.
 * @text_content: pointer to data or text to write to the file.
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, bytes = 0;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file_d == -1)
		return (-1);

	while (text_content[bytes] != '\0' && text_content != NULL)
	{
		if (write(file_d, &text_content[bytes], 1) == -1)
		{
			close(file_d);
			return (-1);
		}
		bytes++;
	}
	close(file_d);
	return (1);
}

