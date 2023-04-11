#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int file_d, write_d;
	int buffer;

	buffer = strlen(text_content);

	if (filename && text_content != NULL)
	{
		file_d = open(filename, O_TRUNC);
		if (file_d == -1)
		{
			close(file_d);
			return (-1);
		}

		write_d = write(file_d, text_content, buffer);
		close(file_d);
	}

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}

	write_d = write(file_d, text_content, buffer);
	if (write_d == -1)
	{
		close(file_d);
		return (-1);
	}
	return (1);
}
