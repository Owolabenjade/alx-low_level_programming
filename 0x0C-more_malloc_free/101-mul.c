#include <stdlib.h>
#include "main.h"

/**
 *  * is_positive_number - Check if a string is a positive number.
 *   * @str: The string to check.
 *    *
 *     * Description:
 *      * This function checks if a given string represents a positive integer.
 *       *
 *        * Return: 1 if the string is a positive number, 0 otherwise.
 *         */
int is_positive_number(const char *str)
{
		if (str == NULL || *str == '\0')
					return 0;

			while (*str != '\0')
					{
								if (*str < '0' || *str > '9')
												return 0;
										str++;
											}

				return (1);
}

/**
 *  * multiply - Multiply two positive numbers.
 *   * @num1: The first positive number.
 *    * @num2: The second positive number.
 *     *
 *      * Description:
 *       * This function multiplies two positive numbers and returns the result.
 *        *
 *         * Return: The result of the multiplication.
 *          */
unsigned int multiply(unsigned int num1, unsigned int num2)
{
		return num1 * num2;
}

/**
 *  * main - Entry point for a program that multiplies two positive numbers.
 *   * @argc: The number of command-line arguments.
 *    * @argv: An array of strings containing the command-line arguments.
 *     *
 *      * Description:
 *       * This program multiplies two positive numbers provided as command-line arguments.
 *        * It checks for the correct number of arguments, validates that the arguments are
 *         * positive integers, performs the multiplication, and prints the result.
 *          *
 *           * Return: 0 on successful execution, 98 on incorrect argument count, and 98 on invalid inputs.
 *            */
int main(int argc, char *argv[])
{
		if (argc != 3)
				{
							_putchar('E');
									_putchar('r');
											_putchar('r');
													_putchar('o');
															_putchar('r');
																	_putchar('\n');
																			exit(98);
																				}

			if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
					{
								_putchar('E');
										_putchar('r');
												_putchar('r');
														_putchar('o');
																_putchar('r');
																		_putchar('\n');
																				exit(98);
																					}

				unsigned int num1 = atoi(argv[1]);
					unsigned int num2 = atoi(argv[2]);

						unsigned int result = multiply(num1, num2);
							printf("%u\n", result);

								return (0);
}
