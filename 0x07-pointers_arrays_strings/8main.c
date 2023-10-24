#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str1 = "Hello, ";
	char *str2 = "world!";

	char *ptr = str1;

	printf("Before set_string:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n\n", str2);

	set_string(&ptr, str2);

	printf("After set_string:\n");
	printf("str1: %s\n", str1);
	printf("ptr: %s\n", ptr);

	return (0);
}
