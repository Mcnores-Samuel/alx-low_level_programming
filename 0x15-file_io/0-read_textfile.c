#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 * @filename: pointer to the file to read from.
 * @letters: number of bytes to read.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d, bytes = 0;
	char *data;

	data = (char *)malloc(sizeof(char) * letters);

	if (data == NULL || filename == NULL)
		return (0);

	file_d = open(filename, O_RDONLY, 0600);
	if (file_d == -1)
	{
		close(file_d);
		return (0);
	}

	bytes = read(file_d, data, letters);
	data[bytes] = '\0';
	close(file_d);

	bytes = write(STDOUT_FILENO, data, bytes);

	if (bytes == EOF)
		return (0);
	free(data);
	return (bytes);
}
