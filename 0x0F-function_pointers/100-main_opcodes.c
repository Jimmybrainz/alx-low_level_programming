#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: Return 0
 */

int main(int argc, char *argv[])
{
	char *optC = (char *) main;
	int i, n_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);

	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", optC[i] & 0xFF);
		if (i != n_bytes - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
