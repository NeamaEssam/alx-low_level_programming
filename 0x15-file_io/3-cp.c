#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 1 if success 0 if failure
 */

int main(int argc, char **argv)
{
	int f1 = 0, f2 = 0;
	ssize_t n;
	unsigned int PERMISSIONS = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f1 = open(argv[1], O_RDONLY);
	if (f1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (f2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((n = read(f1, buff, 1024)) > 0)
	{
		if (f2 < 0 || (write(f2, buff, n) != n))
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f1 = close(f1);
	if (f1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f1), exit(100);
	f2 = close(f2);
	if (f2)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f2), exit(100);

	return (EXIT_SUCCESS);
}
