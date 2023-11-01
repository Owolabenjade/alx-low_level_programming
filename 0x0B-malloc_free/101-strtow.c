/*
 *  * Program: 0x0D. C - Preprocessor
 *   * File: 101-strtow.c
 *    * Author: Benjamin
 *     * Description: This program defines a function `strtow` that splits a string into
 *      * words based on space as the delimiter. The program also includes a test in
 *       * `main.c` to demonstrate the usage of the `strtow` function.
 *        */

/**
 *  * strtow - Splits a string into words.
 *   * @str: The input string to split.
 *    *
 *     * Description: This function takes a string and splits it into words based on
 *      * space as the delimiter. It returns an array of strings, where each element
 *       * contains a single word. The last element of the returned array is NULL.
 *        * If str is NULL or an empty string, the function returns NULL. If memory
 *         * allocation fails, it also returns NULL.
 *          *
 *           * Return: On success, returns a pointer to the array of words. Returns NULL
 *            * on failure.
 *             */
 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

char **strtow(char *str)
{
	char **words = NULL;
		char *token, *copy, *tmp;
			int word_count = 0;

				if (str == NULL || str[0] == '\0')
							return (NULL);

					copy = strdup(str);
						if (copy == NULL)
									return (NULL);

							tmp = copy;

								while ((token = strtok(tmp, " ")) != NULL)
										{
													word_count++;
															tmp = NULL;
																}

									free(copy);

										if (word_count == 0)
													return (NULL);

											words = (char **)malloc((word_count + 1) * sizeof(char *));
												if (words == NULL)
															return (NULL);

													tmp = strdup(str);

														if (tmp == NULL)
																{
																			free(words);
																					return (NULL);
																						}

															token = strtok(tmp, " ");
																int i = 0;
																	while (token != NULL)
																			{
																						words[i] = strdup(token);
																								if (words[i] == NULL)
																											{
																															for (int j = 0; j < i; j++)
																																				free(words[j);
																																		free(words);
																																					free(tmp);
																																								return (NULL);
																																										}
																										i++;
																												token = strtok(NULL, " ");
																													}

																		words[i] = NULL;
																			free(tmp);

																				return (words);
}
