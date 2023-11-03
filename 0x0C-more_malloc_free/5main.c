#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int is_positive_number(char *str)
{
		if (str == NULL || *str == '\0')
					return (0);

			while (*str)
					{
								if (*str < '0' || *str > '9')
												return (0);
										str++;
											}

				return (1);
}

int main(int argc, char *argv[])
{
		if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
				{
							printf("Error\n");
									return (98);
										}

			unsigned long num1 = strtoul(argv[1], NULL, 10);
				unsigned long num2 = strtoul(argv[2], NULL, 10);
					unsigned long result = num1 * num2;

						printf("%lu\n", result);

							return (0);
}
