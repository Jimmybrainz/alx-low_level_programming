#include "main.h"
/**
 *read_textfile - Reads a text file and prints it to the POSIX standard output
 *@filename: The name of the file to be read
 *@letters: The maximum number of characters to read from the file
 *Return: 0 (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *buffer;
	ssize_t read_count, write_count;

	if (filename == NULL)
	{
		return (0);
	}
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		return (0);
	}
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		close(file_desc);
		return (0);
	}
	read_count = read(file_desc, buffer, letters);
	if (read_count == -1)
	{
		free(buffer);
		close(file_desc);
		return (0);
	}
	buffer[read_count] = '\0';

	write_count = write(STDOUT_FILENO, buffer, read_count);

	if (write_count == -1 || write_count != read_count)
	{

		free(buffer);
		close(file_desc);
		return (0);
	}
	free(buffer);
	close(file_desc);
	return (write_count);
}
