#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	char *s = "racecar"; /* Example input, you can change it to any string */
	int result = is_palindrome(s);

	if (result == 1)
	{
	printf("%s is a palindrome.\n", s);
	}
	else
	{
	printf("%s is not a palindrome.\n", s);
	}

	return (0);
}
