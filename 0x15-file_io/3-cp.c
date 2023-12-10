#include "main.h"

/**
 *  * main - Entry point
 *   * @argc: Argument count
 *    * @argv: Argument vector
 *     * Return: 0 on success
 *      */
int main(int argc, char *argv[])
{
		int fd_from, fd_to, read_bytes, write_bytes;
			char buffer[1024];
				mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

					if (argc != 3)
								dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);

						fd_from = open(argv[1], O_RDONLY);
							if (fd_from == -1)
										dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);

								fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
									if (fd_to == -1)
												dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);

										while ((read_bytes = read(fd_from, buffer, 1024)) > 0)
												{
															write_bytes = write(fd_to, buffer, read_bytes);
																	if (write_bytes == -1 || read_bytes != write_bytes)
																				{
																								dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
																											exit(99);
																													}
																		}

											if (read_bytes == -1)
													{
																dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
																		exit(98);
																			}

												if (close(fd_from) == -1)
															dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

													if (close(fd_to) == -1)
																dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);

														return (0);
}
