#include "main.h"

/**
 *  * main - Entry point
 *   * @argc: Argument count
 *    * @argv: Argument vector
 *     * Return: 0 on success, 98 on failure
 *      */
int main(int argc, char *argv[])
{
		int fd;
		ElfHeader header;

				if (argc != 2)
						{
									dprintf(STDERR_FILENO, "Usage: %s elf_filename\n", argv[0]);
											exit(98);
												}

					fd = open(argv[1], O_RDONLY);
						if (fd == -1)
								{
											dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", argv[1]);
													exit(98);
														}

							if (read(fd, &header, sizeof(header)) != sizeof(header) || !is_elf(header))
									{
												dprintf(STDERR_FILENO, "Error: Not an ELF file: %s\n", argv[1]);
														close(fd);
																exit(98);
																	}

								print_elf_header_info(header);

									close(fd);
										return (0);
}

/**
 *  * is_elf - Check if the given ELF header is valid
 *   * @header: ELF header
 *    * Return: 1 if valid, 0 otherwise
 *     */
int is_elf(ElfHeader header)
{
		if (header.e_ident[EI_MAG0] == ELFMAG0 &&
						header.e_ident[EI_MAG1] == ELFMAG1 &&
								header.e_ident[EI_MAG2] == ELFMAG2 &&
										header.e_ident[EI_MAG3] == ELFMAG3)
					return (1);
			return (0);
}

/**
 *  * print_elf_header_info - Print information from ELF header
 *   * @header: ELF header
 *    */
void print_elf_header_info(ElfHeader header)
{
	int i;

	printf("  Magic:   ");
		for (i = 0; i < EI_NIDENT; i++)
						printf("%02x%s", header.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");

				printf("  Class:                             %s\n", get_class(header.e_ident[EI_CLASS]));
					printf("  Data:                              %s\n", get_data(header.e_ident[EI_DATA]));
						printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
							printf("  OS/ABI:                             %s\n", get_osabi(header.e_ident[EI_OSABI]));
								printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
									printf("  Type:                              %s\n", get_type(header.e_type));
										printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);
}

/**
 *  * get_class - Get ELF class
 *   * @class: ELF class identifier
 *    * Return: String representation of the class
 *     */
char *get_class(unsigned char class)
{
		switch (class)
				{
						case ELFCLASS32:
									return "ELF32";
										case ELFCLASS64:
											return "ELF64";
												default:
													return "Unknown";
														}
}

/**
 *  * get_data - Get ELF data encoding
 *   * @data: ELF data encoding identifier
 *    * Return: String representation of the data encoding
 *     */
char *get_data(unsigned char data)
{
		switch (data)
				{
						case ELFDATA2LSB:
									return "2's complement, little endian";
										case ELFDATA2MSB:
											return "2's complement, big endian";
												default:
													return "Unknown";
														}
}

/**
 *  * get_osabi - Get ELF OS/ABI
 *   * @osabi: ELF OS/ABI identifier
 *    * Return: String representation of the OS/ABI
 *     */
char *get_osabi(unsigned char osabi)
{
		switch (osabi)
				{
						case ELFOSABI_SYSV:
									return "UNIX - System V";
										case ELFOSABI_HPUX:
											return "UNIX - HP-UX";
												case ELFOSABI_NETBSD:
													return "UNIX - NetBSD";
														case ELFOSABI_LINUX:
															return "UNIX - Linux";
																case ELFOSABI_SOLARIS:
																	return "UNIX - Solaris";
																		case ELFOSABI_IRIX:
																			return "UNIX - IRIX";
																				case ELFOSABI_FREEBSD:
																					return "UNIX - FreeBSD";
																						case ELFOSABI_TRU64:
																							return "UNIX - TRU64";
																								case ELFOSABI_ARM:
																									return "ARM";
																										case ELFOSABI_STANDALONE:
																											return "Standalone (embedded)";
																												default:
																													return "Unknown";
																														}
}

/**
 *  * get_type - Get ELF type
 *   * @type: ELF type identifier
 *    * Return: String representation of the type
 *     */
char *get_type(uint16_t type)
{
		switch (type)
				{
						case ET_NONE:
									return "NONE (Unknown type)";
										case ET_REL:
											return "REL (Relocatable file)";
												case ET_EXEC:
													return "EXEC (Executable file)";
														case ET_DYN:
															return "DYN (Shared object file)";
																case ET_CORE:
																	return "CORE (Core file)";
																		default:
																			return "Unknown";
																				}
}
