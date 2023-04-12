#include "main.h"
#include <string.h>

int create_file(const char *filename, char *text_content)
{
	int file_d, write_d, str_len = 0;

	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
	{
		close(file_d);
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[str_len] != '\0')
			str_len++;

		write_d = write(file_d, text_content, str_len);
		if (write_d == -1)
		{
			close(file_d);
			return (-1);
		}
		close(file_d);
	}
	return (1);
}
