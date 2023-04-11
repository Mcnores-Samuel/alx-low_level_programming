#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int file_d, write_d;
	char *buffer;

	buffer = (char *)malloc(strlen(text_content));

	if (buffer == NULL)
		return (-1);

	if (filename)
	{
		file_d = open(filename, O_TRUNC);
		if (file_d == -1)
		{
			close(file_d);
			return (-1);
		}

		write_d = write(file_d, buffer, strlen(text_content));
		close(file_d);
	}

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}

	write_d = write(file_d, buffer, strlen(text_content));
	if (write_d == -1)
	{
		close(file_d);
		return (-1);
	}
	return (write_d);
}
