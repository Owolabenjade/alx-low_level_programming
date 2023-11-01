#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(int argc, char *argv[])
{
	    char *concatenated;

	        if (argc < 2)
			    {
				            printf("Usage: %s arg1 arg2 ... argN\n", argv[0]);
					            return 1;
						        }

		    concatenated = argstostr(argc - 1, argv + 1);

		        if (concatenated == NULL)
				    {
					            printf("Failed to concatenate arguments.\n");
						            return 1;
							        }

			    printf("Concatenated arguments:\n%s", concatenated);

			        free(concatenated);

				    return 0;
}
