#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @argc: arguement count
* @argv: arguement vector
* Return: copied file
*/
int main(int argc, char **argv)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);
exit(0);
}

/**
* copy_file - Function that copies a file
* @source: Source file
* @destination: Destination of copied file
* Return: exit with output message(code)
*/
void copy_file(const char *source, const char *destination)
{
int i;
int j;
int read_file;
char buff[1024];
i = open(source, O_RDONLY);
if (!source || i == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
exit(98);
}
j = open(destination, O_CREAT | O_WRONLY | O_TRUNC, 0664);
while ((read_file = read(i, buff, 1024)) > 0)
{
if (write(j, buff, read_file) != read_file || j == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", destination);
exit(99);
}
}
if (read_file == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source);
exit(98);
}
if (close(i) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", i);
exit(100);
}
if (close(j) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fp %d\n", j);
exit(100);
}
}
