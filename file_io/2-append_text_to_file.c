#include "main.h"

/**
 *append_text_to_file - fonction create a file
 *@filename: file
 *@text_content: text
 *Return: return true
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w;
	int len;

	if (!filename)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		text_content = "";
	}
	len = strlen(text_content);
	fd = open(filename, O_RDWR | O_APPEND, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
	{
		return (-1);
		}
		close(fd);

		return (1);
}
