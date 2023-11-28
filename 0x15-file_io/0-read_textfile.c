#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	char *tmp_store;
	ssize_t read_counter, write_counter;

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (0);
	/* open file */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	/* Allocate memory for tmp_store */
	tmp_store = malloc(sizeof(char) * letters);
	if (tmp_store == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	/* Read from file into tmp_store */
	read_counter = read(file_descriptor, tmp_store, letters);
	if (read_counter == -1)
	{
		free(tmp_store);
		close(file_descriptor);
		return (0);
	}
	/*Close the file*/
	close(file_descriptor);
	/* Write tmp_store to standard output */
	write_counter = write(STDOUT_FILENO, tmp_store, read_counter);
	if (write_counter == -1)
	{
		free(tmp_store);
		return (0);
	}
	/*Free the allocated memory*/
	free(tmp_store);
	/*Return the number of bytes written to standard output*/
	return (write_counter);
}
