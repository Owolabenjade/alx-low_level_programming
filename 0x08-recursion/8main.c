#include <stdio.h>
#include "main.h"

int main(void)
{
	char *s1 = "hello";
	char *s2 = "h*llo"; /* Example input, you can change it to any strings */
	int result = wildcmp(s1, s2);

	if (result == 1)
	{
		printf("The strings can be considered identical.\n");
	}
	else
	{
		printf("The strings are not identical.\n");
	}

	return (0);
}
