#include "main.h"
#include <stdio.h>

/**
 *  * error_exit - Exits the program with an error code and prints an error message.
 *   * @code: The exit code.
 *    * @message: The error message format.
 *     * @...: Additional arguments for the error message format.
 *      */
void error_exit(int code, const char *message, ...)
{
		va_list args;
			va_start(args, message);
				dprintf(STDERR_FILENO, "Error: ");
					vdprintf(STDERR_FILENO, message, args);
						dprintf(STDERR_FILENO, "\n");
							va_end(args);
								exit(code);
}

/**
 *  * copy_file - Copies the content of a file to another file.
 *   * @file_from: The source file.
 *    * @file_to: The destination file.
 *     */
void copy_file(const char *file_from, const char *file_to)
{
		int fd_from, fd_to, read_result, write_result;
			char buffer[BUFFER_SIZE];

				fd_from = open(file_from, O_RDONLY);
					if (fd_from == -1)
								error_exit(98, "Can't read from file %s", file_from);

						fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH);
							if (fd_to == -1)
									{
												close(fd_from);
														error_exit(99, "Can't write to file %s", file_to);
															}

								do
										{
													read_result = read(fd_from, buffer, BUFFER_SIZE);
															if (read_result == -1)
																		{
																						close(fd_from);
																									close(fd_to);
																												error_exit(98, "Can't read from file %s", file_from);
																														}

																	write_result = write(fd_to, buffer, read_result);
																			if (write_result == -1 || write_result != read_result)
																						{
																										close(fd_from);
																													close(fd_to);
																																error_exit(99, "Can't write to file %s", file_to);
																																		}

																				} while (read_result > 0);

									if (close(fd_from) == -1)
												error_exit(100, "Can't close fd %d", fd_from);

									if (close(fd_to) == -1)
												error_exit(100, "Can't close fd %d", fd_to);
}

/**
 *  * main - Entry point.
 *   * @argc: The number of arguments.
 *    * @argv: The array of arguments.
 *     *
 *      * Return: 0 on success, otherwise exit with the specified error codes.
 *       */
int main(int argc, char **argv)
{
		if (argc != 3)
					error_exit(97, "Usage: cp file_from file_to");

			copy_file(argv[1], argv[2]);

				return (0);
}
