#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  *
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies data from source file to dest.
  * @src: pointer to the file to copy data or text file_from
  * @dest: pointer to the file to copy data or text to.
  * Return: nothing.
  */
void copy_file(const char *src, const char *dest)
{
	int fd[2], bytes;
	char buff[1024];

	fd[0] = open(src, O_RDONLY);
	if (!src || fd[0] == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	fd[1] = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((bytes = read(fd[0], buff, 1024)) > 0)
	{
		if (write(fd[1], buff, bytes) != bytes || fd[1] == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(fd[0]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[0]);
		exit(100);
	}

	if (close(fd[1]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd[1]);
		exit(100);
	}
}
