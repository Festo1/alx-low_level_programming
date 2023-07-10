#include "main.h"

/**
 * create_file - It creates a file.
 * @filename: pointer to the name of the file to be created.
 * @text_content: a pointer to the string to write in the file.
 *
 * Return: If the function fails, -1.
 * Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0; /* variable declarations */

	if (filename == NULL) /* if filename is NULL, return -1 */
		return (-1);

	if (text_content != NULL) /* if text_content is not NULL, get its length */
	{
		for (len = 0; text_content[len];)
			len++;
	}

	/* create file with an appropriate flags and permissions */
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len); /* write text_content to file */

	if (o == -1 || w == -1) /* if any errors occur, return -1 */
		return (-1);

	close(o); /* close the file */

	return (1); /* return 1 on success */
}
