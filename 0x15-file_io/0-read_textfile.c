#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - It reads a text file and prints it to the POSIX stdout.
 * @filename: pointer to the name of the file.
 * @letters: The number of letters that a function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 * Otherwise, the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;  /* variable declarations */
	char *buffer; /* the pointer to a char */

	if (filename == NULL) /* if filename is NULL, then return 0 */
		return (0);

	buffer = malloc(sizeof(char) * letters); /* allocates memory for buffer */
	if (buffer == NULL) /* if malloc fails, return 0 */
		return (0);

	o = open(filename, O_RDONLY); /* open file for reading */
	r = read(o, buffer, letters); /* read data from file */
	w = write(STDOUT_FILENO, buffer, r); /* write data to standard output */

	/* if any errors occur, free buffer and return 0 */
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer); /* free the allocated memory */
	close(o); /* close the file */

	return (w); /* return the number of bytes written to stdout */
}
