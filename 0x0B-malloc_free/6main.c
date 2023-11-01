nclude <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void)
{
		char *str = "Split this string into words";
			char **words = NULL;

				words = strtow(str);

					if (words == NULL)
							{
										printf("Failed to split the string into words.\n");
												return (1);
													}

						printf("Words:\n");
							for (int i = 0; words[i] != NULL; i++)
									{
												printf("%s\n", words[i]);
														free(words[i]);
															}

								free(words);

									return (0);
}
