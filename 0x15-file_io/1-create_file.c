#include "main.h"

/**
 *create_file - Creates a file and writes a string to it
 *@filename: The name of the file to be created
 *@text_content: A NULL-terminated string to be written to the file
 *Return: 0 (success)
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, length;

	ssize_t write_count;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		length = strlen(text_content);

		write_count = write(file_desc, text_content, length);

		if (write_count == -1 || write_count != length)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
