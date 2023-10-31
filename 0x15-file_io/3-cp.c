#include"main.h"
#define BUF_SIZE 1024
/**
 * print_error - Print error messages based on the error code
 * @error_code: The error code to determine the message to be printed
 * @file_name: The name of the file related to the error
 * Return: void
 */
void print_error(int error_code, const char *file_name)
{
	switch (error_code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file_name);
			break;
		default:
			break;
	}
}
/**
 * main - Copies the content of a file to another file
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, various error codes on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUF_SIZE];
	struct stat source_stat;

	if (argc != 3)
	{
		print_error(97, NULL);
		return (97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		print_error(98, argv[1]);
		return (98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT |
			O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP);
	if (file_to == -1)
	{
		print_error(99, argv[2]);
		return (99);
	}
	if (fstat(file_from, &source_stat) == -1)
	{
		print_error(98, argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}
	if (fchmod(file_to, source_stat.st_mode) == -1)
	{
		print_error(100, argv[2]);
		close(file_from);
		close(file_to);
		return (100);
	}
	while ((bytes_read = read(file_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			print_error(99, argv[2]);
			close(file_from);
			close(file_to);
			return (99);
		}
	}
	if (bytes_read == -1)
	{
		print_error(98, argv[1]);
		close(file_from);
		close(file_to);
		return (98);
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		print_error(100, file_from == -1 ? argv[1] : argv[2]);
		return (100);
	}
	return (0);
}
