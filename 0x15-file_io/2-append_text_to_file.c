#include "main.h"

/**
 * _strlen - return string length
 * @s: string to be used
 * Return: int
 */
int _strlen(char *s)
{
	int len = 0;

	if (!s)
		return (0);

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t n = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		n = write(file, text_content, len);
		if (n == -1)
		{
			close(file);
			return (-1);
		}
		close(file);
		return (1);
	}
	else
	{
		close(file);
		return (1);
	}
}
