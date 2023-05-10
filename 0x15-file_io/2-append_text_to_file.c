#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file.
 * @filename: pointer to the file to append text or data to.
 * @text_content: pointer to the text or data to be appended.
 * Return: 1 on success of -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, bytes = 0;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file_d = open(filename, O_APPEND | O_WRONLY);

	if (file_d == -1)
		return (-1);

	while (text_content[bytes] != '\0')
		bytes++;

	bytes = write(file_d, text_content, bytes);

	if (bytes == -1)
	{
		close(file_d);
		return (-1);
	}

	close(file_d);
	return (1);
}
