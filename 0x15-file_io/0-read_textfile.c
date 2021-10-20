#include "main.h"
#include "stdlib.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX
 * @filename: A pointer to the name of the file.
 * @letters: is the number of letters it should read and print
 * Return: if the function fails or file name is NULL -O
 * w- number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open
		(filename, O_RDONLY);
	r = read 
		(o, buffer, letters);
	w = write
		(STDOUT-FILENO, buffer,r);

	if (o == -1 || r == -1 || w == -1 ||  w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);

	return (w);
}

