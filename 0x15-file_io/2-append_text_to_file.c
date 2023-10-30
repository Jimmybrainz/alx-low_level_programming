#include "main.h"

/**
 *append_text_to_file - Appends text to the end of a file
 *@filename: The name of the file to be appended to
 *@text_content: A NULL-terminated string to be appended to the file
 *Return: On success, returns 1
 *Or if 'filename' is NULL, returns -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, length;

	ssize_t write_count;

	if (filename == NULL)
	{
		return (-1);
	}
	file_desc = open(filename, O_RDWR | O_APPEND);

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
