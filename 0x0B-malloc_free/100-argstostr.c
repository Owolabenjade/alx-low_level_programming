/*
 *  * Program: 0x0D. C - Preprocessor
 *   * File: 100-argstostr.c
 *    * Author: [Your Name]
 *     * Description: This program defines a function `argstostr` that concatenates all
 *      * the arguments of the program into a single string. Each argument is followed by
 *       * a new line character in the resulting string. The program also includes a test
 *        * in `main.c` to demonstrate the usage of the `argstostr` function.
 *         */

#include <stdlib.h>

/**
 *  * argstostr - Concatenates all the arguments of the program.
 *   * @ac: The number of arguments.
 *    * @av: An array of argument strings.
 *     *
 *      * Description: This function takes the number of arguments (ac) and an array of
 *       * argument strings (av) and concatenates all the arguments into a single string.
 *        * Each argument is followed by a new line character in the resulting string. If
 *         * ac is 0 or av is NULL, the function returns NULL. If memory allocation fails,
 *          * it also returns NULL.
 *           *
 *            * Return: On success, returns a pointer to the concatenated string. Returns NULL
 *             * on failure.
 *              */

char *argstostr(int ac, char **av)
{
		char *concatenated;
			int i, j, len, total_len = 0;
				int newline_count = ac - 1; /* Number of newlines needed */

					if (ac == 0 || av == NULL)
								return NULL;

						for (i = 0; i < ac; i++)
								{
											if (av[i] == NULL)
															return NULL;

													len = 0;
															while (av[i][len] != '\0')
																			len++;

																	total_len += len;
																		}

							total_len += newline_count; /* Add space for newlines */

								concatenated = (char *)malloc(total_len + 1); /* +1 for the null terminator */

									if (concatenated == NULL)
												return NULL;

										for (i = 0, j = 0; i < ac; i++)
												{
															len = 0;
																	while (av[i][len] != '\0')
																				{
																								concatenated[j] = av[i][len];
																											len++;
																														j++;
																															   }

																			if (i < ac - 1)
																						{
																										concatenated[j] = '\n'; /* Add a newline after each argument */
																													j++;
																															}
																				}

											concatenated[j] = '\0'; /* Null-terminate the concatenated string */

												return (concatenated);
}
