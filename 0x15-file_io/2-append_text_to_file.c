#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to create
 * @text_content: the NULL terminated string to add at the end of the
 * Do not create the file if it does not exist
 * Return: 1 if successful. -1 Otherwise.
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file,
 * Return 1 if the file exists and -1 if the file does not exist,
 * or if you do not have the required permissions to write the file
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	unsigned int length = 0;

	if (filename == NULL)
		return (-1);

	/* open file */
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	/* write to file */
	if (text_content)
	{
		/* count the number of bytes in text_content */
		while (text_content[length])
			length++;

		if (write(file_descriptor, text_content, length) == -1)
			return (-1);
	}
	/* close the file*/
	close(file_descriptor);
	/* Return the number of bytes*/
	return (1);
}
