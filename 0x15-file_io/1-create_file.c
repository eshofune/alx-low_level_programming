#include "main.h"

/**
* create_file - function that creates a file
* @filename: file to be created
* @text_content: Is a NULL terminated string to write to the file
* Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content)
{
int fp;
int i;
int _strlen = 0;
if (!filename)
return (-1);
if (text_content != NULL)
{
for (_strlen = 0; text_content[_strlen];)
_strlen++;
}
fp = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
i = write(fp, text_content, _strlen);
if (fp == -1 || i == -1)
return (-1);
close(fp);
return (1);
}
