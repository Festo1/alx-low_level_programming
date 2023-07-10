#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_buffer - It allocates 1024 bytes for a buffer.
 * @file: Name of the file buffer is storing chars for.
 * Return: The pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		/* Prints an error message and exit with code 99 */
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - It Closes the file descriptor.
 * @fd: File descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - It Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: (0) on success.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		/* Prints the usage message and exit with code 97 */
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]); /* Allocate the memory for buffer */
	from = open(argv[1], O_RDONLY); /* Opens the source file for reading */
	/* Read from the source file and store in buffer */
	r = read(from, buffer, 1024);
	/* Open the destination file for writing */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {	/* Loop through until there is no more data to read */
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);/* Write data from buffer to the destination file */
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		/* Read from the source file and store in buffer */
		r = read(from, buffer, 1024);
		/* Open the destination file for writing and appending */
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer); /* Free the buffer */
	close_file(from); /* Close the source and destination files */
	close_file(to);
	return (0);
}
