#include "main.h"

/**
 *copy_file - Copies the content of a file to another file.
 *@file_from: The source file.
 *@file_to: The destination file.
 *
 *Return: 0 on success, -1 on failure.
*/
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to, bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		print_error(98, file_from);
		return (-1);
	}

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
	if (fd_to == -1)
	{
		print_error(99, file_to);
		close(fd_from);
		return (-1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read || bytes_written == -1)
		{
			print_error(99, file_to);
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		print_error(98, file_from);
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	close(fd_from);
	close(fd_to);
	return (0);
}
