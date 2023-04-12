#include "main.h"

/**
 *create_file - fonction create a file
 *@filename: file
 *@text_content: text
 *Return: return true
*/

int create_file(const char *filename, char *text_content)
{
	int fd, w;
	int len;

	if (!filename)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = " ";
	}

	len = strlen(text_content);
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	w = write(fd, text_content, len);
	if (w == -1)
	{
		return (-1);
	}
	return (1);
}
