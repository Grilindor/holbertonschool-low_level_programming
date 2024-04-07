#include "main.h"

/**
 *
 *
 *
 *
 *
 **/

void error_file(int file_from, int file_to, char *argv[])
{
	/*Check if there is an error reading from the file*/
	if (file_from == -1)
	{
		/*Print an error message indicating the inability to read from the specified file*/
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		/*Exit the program with exit code 98*/
		exit(98);
	}

	/*Check if there is an error writing to the file*/
	if (file_to == -1) {
		/*Print an error message indicating the inability to write to the specified file*/
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		/*Exit the program with exit code 99*/
		exit(99);
	}
}

/**
 * main - main function that copies the content of a file to another file
 *
 *
 *
 *
 **/


int main(int argc, char *argv[])
{
	int file_from, file_to, err_close; /*File descriptors and error handling variable*/
	ssize_t nchars, nwr; /*Number of characters read and written*/
	char buf[1024]; /*Buffer for reading/writing data*/

	if (argc != 3) { /*Check if correct number of arguments are provided*/
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to"); /*Print usage message to standard error*/
		exit(97); /*Exit with error code 97*/
	}

	file_from = open(argv[1], O_RDONLY); /*Open source file for reading*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664); /*Open destination file for writing*/
	error_file(file_from, file_to, argv); /*Check for errors in opening files*/

	nchars = 1024; /*Initialize nchars to 1024*/

	while (nchars == 1024)
	{ /*Continue reading until less than 1024 characters are read*/
		nchars = read(file_from, buf, 1024); /*Read from source file*/

		if (nchars == -1)
			error_file(-1, 0, argv); /*Check for read errors*/

		nwr = write(file_to, buf, nchars); /*Write to destination file*/

		if (nwr == -1)
			error_file(0, -1, argv); /*Check for write errors*/
	}

	err_close = close(file_from); /*Close source file*/

	if (err_close == -1)
	{ /*Check for close error*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from); /*Print error message*/
		exit(100); /*Exit with error code 100*/
	}

	err_close = close(file_to); /*Close destination file*/

	if (err_close == -1)
	{ /*Check for close error*/
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from); /*Print error message*/
		exit(100); /*Exit with error code 100*/
	}

	return (0); /*Exit successfully*/
}
