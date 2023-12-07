#include "main.h"

/**
 * append_text_to_file - that function append text to file let's go
 *
 * @filename: filename
 * @text_content: content file as text
 *
 * Return: 1 on Success , -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, file;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content != '\0')
		i++;
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	write(file, text_content, i);
	return (1);
}
