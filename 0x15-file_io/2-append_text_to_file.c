#include"main.h"
/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: The name of the file
 * @text_content: The text content to append
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);
	write_result = dprintf(file_descriptor, "%s", text_content);
	if (write_result < 0)
	{
		close(file_descriptor);
		return (-1);
	}
	close(file_descriptor);
	return (1);
}
