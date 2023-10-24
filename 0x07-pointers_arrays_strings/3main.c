#include "main.h"
#include <stdio.h>

int main(void)
{
	char str[] = "1234567890";
	char accept[] = "1234567890";
	unsigned int len = _strspn(str, accept);

	printf("Length of the prefix substring: %u\n", len);

	return 0;
}
