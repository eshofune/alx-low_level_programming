#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: file to be created
* @text_content: is the NULL terminated string to add at the end of the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
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
fp = open(filename, O_WRONLY | O_APPEND);
i = write(fp, text_content, _strlen);
if (fp == -1 || i == -1)
return (-1);
close(fp);
return (1);
}
