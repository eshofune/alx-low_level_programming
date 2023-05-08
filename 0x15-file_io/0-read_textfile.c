#include "main.h"

/**
* read_textfile - reads a text file and prints it
* to the POSIX standard output
* @filename: file that contains text file being read
* @letters: number of letters it should read and print
* Return: number of bytes that were read and printed
* 0 if filename is NULL
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *holder;
ssize_t fp;
ssize_t no_of_bytes;
ssize_t text_t;

fp = open(filename, O_RDONLY);
if (fp == -1)
return (0);
holder = malloc(sizeof(char *) * letters);
text_t = read(fp, holder, letters);
no_of_bytes = write(STDOUT_FILENO, holder, text_t);
free(holder);
close(fp);
return (no_of_bytes);
}
