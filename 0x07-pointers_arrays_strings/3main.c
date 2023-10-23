#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "Hello, World!";
	char accept[] = "Helo,Wrld"; /* Characters to accept */

	unsigned int length = _strspn(str, accept);
	printf("Length of prefix substring: %u\n", length);

	return (0);
}
