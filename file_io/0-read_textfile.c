#include "main.h"

/**
 * read_textfile - a function that reads a text file and prints it
 * to the POSIX standard output
 *@filename: the text
 *@letters: the len of the string
 *Return: the text
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, let, w;
	char *text;

	/*Allocate memory for the text buffer*/
	text = malloc(letters);
	if (text == NULL)
		return (0);

	/*Check if the filename is valid*/
	if (filename == NULL)
		return (0);

	/*Open the file in read-only mode*/
	file = open(filename, O_RDONLY);
		if (file == -1)
		{
			free(text);
			return (0);
		}

	/*Read 'letters' number of bytes from the file into the text buffer*/
	let = read(file, text, letters);

	/*Write the read text to the standard output*/
	w = write(STDOUT_FILENO, text, let);

	/*Close the file and free the allocated memory*/
	close(file);
	return (w);
}
