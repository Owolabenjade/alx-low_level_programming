#include "main.h"

/**
 *create_file - Creates a file with the given
 *filename and writes text_content to it.
 *@filename: The name of the file to create.
 *@text_content: The content to write to the file.
 *
 *Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int file_desc, write_result;
	size_t text_length;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		text_length = 0;
		while (text_content[text_length] != '\0')
			text_length++;

		write_result = write(file_desc, text_content, text_length);
		if (write_result == -1 || (size_t)write_result != text_length)
		{
			close(file_desc);
			return (-1);
		}
	}

	close(file_desc);
	return (1);
}
