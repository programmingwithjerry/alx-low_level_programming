#include "main.h"

int _close(int fd);
int _cp(char *file_from, char *file_to);

/**
 * main - copies the content of a file to another file
 * @argc: number of commandline arguments passed
 * @argv: an array of commandline arguments
 * Return: 0 if successful
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	/* copy from file_from to file_to */
	_cp(argv[1], argv[2]);
	return (0);
}
/**
 * _cp - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Return: 1 if successful
 */

/*Function to copy contents from one file to another */
int _cp(char *file_from, char *file_to)
{
	/*Declare variables for file descriptors and byte count */
	int fd_read, fd_write, count;
	char buf[1024];
	/*Open the source file in read-only mode */
	fd_read = open(file_from, O_RDONLY);

	fd_write = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	/* Read bytes from source file to destination file*/
	while ((count = read(fd_read, buf, 1024)))
	{
		/*Check for read errors*/
		if (fd_read == -1 || count == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			_close(fd_write);
			exit(98);
		}
		if (fd_write == -1 || write(fd_write, buf, count) != count)
		{
			_close(fd_read);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	/* close the files */
	_close(fd_read);
	_close(fd_write);
	return (1);
}

/**
 * _close - close a file given by file descriptor
 * @fd:The file descriptor
 * Return: 1 if successful
 */
int _close(int fd)
{
	if (fd < 0)
		return (1);

	if (close(fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
