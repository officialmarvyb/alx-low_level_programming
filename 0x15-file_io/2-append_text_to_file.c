#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The pointer to name of the file.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int desc, wrt = 0;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);

	if (desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[wrt] != '\0')
		wrt++;
	if (write(desc, text_content, wrt) == -1)
		return (-1);
	}

	close(desc);
	return (1);
}
