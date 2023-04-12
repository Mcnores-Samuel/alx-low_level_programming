#include "main.h"

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, written_d, str_len = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_APPEND | O_WRONLY);

	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len] != '\0')
			str_len++;
		written_d = write(file_d, text_content, str_len);

		if (written_d == -1)
		{
			close(file_d);
			return (-1);
		}
		close(file_d);
	}
	return (1);
}
