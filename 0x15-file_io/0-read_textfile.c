#include "file.h"

/**
 * read_textfile - reads text and prints it to the POSIX standard output
 * @filename: pointer to the file to read from.
 * @letters: number of bytes or letters to read from the file.
 * Return: number of bytes read and printed or 0 if error occured.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int file_d, bytes = 0;
	char *data;

	if (filename == NULL)
		return (0);
	if (letters > 0)
	{
		data = (char *)malloc(sizeof(char) * letters);
		if (data == NULL)
			return (0);
	}

	file_d = open(filename, O_RDONLY);
		if (file_d == -1)
			return (0);
	if (read(file_d, data, letters) == -1)
	{
		close(file_d);
		return (0);
	}
	while (data[bytes] != EOF && bytes < letters)
	{
		write(STDIN_FILENO, &data[bytes], 1);
		bytes++;
	}
	close(file_d);
	free(data);
	return (bytes);
}
