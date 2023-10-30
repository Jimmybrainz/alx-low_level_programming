#include "main.h"

/**
 *main - Copies the content of one file to another
 *@ar: The number of command-line arguments
 *@av: The command-line arguments
 *Return: 0 (success)
 */

int main(int ar, char *av[])
{
	int src_fd, dest_fd, bytes_read;
	char buf[1024];

	if (ar != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	src_fd = open(av[1], O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	dest_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	while ((bytes_read = read(src_fd, buf, 1024)) > 0)
	{
		if (write(dest_fd, buf, bytes_read) != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	}
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src_fd), exit(100);
	}
	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd), exit(100);
	}
	return (0);

}
