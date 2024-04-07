#include "main.h"

/**
 * create_file - Function to create a new file with
 * specified filename and content
 *@filename: Name of the file to be created
 *@text_content: Content to be written to the file
 *Return: - 1 on success, -1 on failure
 **/

int create_file(const char *filename, char *text_content)
{
	int i, new_file;

	/*Check if filename is NULL*/
	if (filename == NULL)
		return (-1);

	/*If text_content is provided, set it to an empty string*/
	if (text_content == NULL)
		text_content = "";

	/*Calculate the length of the text_content*/
	for (i = 0; text_content[i] != '\0'; i++)
		;

	/*Create a new file with specified permissions*/
	new_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (new_file == -1)
		return (-1);

	write(new_file, text_content, i);

	return (1);
}
