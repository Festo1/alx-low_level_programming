#include "main.h"

/**
 * append_text_to_file - It appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: A string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1. If the file does not
 * exist the user lacks write permissions
 *
 * Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0; /* variable declarations */

	if (filename == NULL) /* if filename is NULL, return -1 */
		return (-1);

	if (text_content != NULL) /* if text_content is not NULL, get its length */
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len); /* write text_content to file */

	if (o == -1 || w == -1) /* if any errors occur, return -1 */
		return (-1);

	close(o); /* close the file */

	return (1); /* return 1 on success */
}
