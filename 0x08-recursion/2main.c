#include <stdio.h>
#include "main.h" /* Include the header file */

int main(void)
{
	char str[] = "Hello, world!";
	int length = _strlen_recursion(str);
	printf("Length of the string: %d\n", length);

	return (0);
}
