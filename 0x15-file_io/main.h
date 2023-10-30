#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 * Return: The actual number of letters it could read and print
 * 0 if the file can't be opened or read, or if write fails or does not
 * write the expected amount of bytes, or if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters);


#endif
