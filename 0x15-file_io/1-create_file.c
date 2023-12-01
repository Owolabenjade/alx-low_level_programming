#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 *create_file - Creates a file with the specified content.
 *@filename: The name of the file to create.
 *@text_content: The content to write to the file
 *(NULL-terminated string).
 *
 *Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_status;
	size_t text_len = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len] != '\0')
			text_len++;

		write_result = write(file_descriptor, text_content, text_length);
		if (write_result == -1 || write_result != text_length)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);

	return (1);
}