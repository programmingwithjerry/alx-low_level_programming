#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * Return: 1 on success, -1 on failure
 * (file can not be created, file can not be written, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	unsigned int length = 0;

	if (filename == NULL)
		return (-1);

	/* open file */
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	/* write to file */
	if (text_content)
	{
		/* count the number of bytes in text_content */
		while (text_content[length])
			length++;

		if (write(file_descriptor, text_content, length) == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
