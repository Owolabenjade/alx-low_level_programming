#include <stdio.h>

/**
print_before_main - Prints a message before the main function is executed.
This function is executed before the main function.
*/
void __attribute__((constructor)) print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
