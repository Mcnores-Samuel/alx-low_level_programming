#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, written_d;
	size_t data_read;
	char *size;

	size = (char *)malloc(sizeof(char) * letters);

	if (size == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY, 0600);
	if (file_d == -1)
	{
		close(file_d);
		return (0);
	}

	data_read = read(file_d, size, letters);
	size[letters] = '\0';
	close(file_d);

	written_d = write(STDOUT_FILENO, size, data_read);

	if (written_d == -1)
		return (0);

	return (written_d);
}
