#include "main.h"
/**
 * create_file - creates a file and adds permission to it
 * @filename: The name of the file to be created
 * @text_content: content to be placed in the created file
 * Return: 1 if successfull and -1 on err.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fild = 0, ace = 0, i = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fild = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fild < 0)
		return (-1);

	while (text_content[i])
		i++;
	ace = write(fild, text_content, i);
	if (ace < 0)
		return (-1);

	close(fild);
	return (1);
}
