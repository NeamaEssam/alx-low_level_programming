#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: input
 * @letters: input
 * Return: number bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t n;
	char *buff = malloc(letters * sizeof(char));

	if (buff == NULL)
		return (0);
	if (!filename || !letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	n = read(file, buff, letters);
	n = write(STDOUT_FILENO, buff, n);
	close(file);
	return (n);
}
