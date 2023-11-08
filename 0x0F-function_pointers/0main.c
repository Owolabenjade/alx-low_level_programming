#include "function_pointers.h"
#include <stdio.h>

void print_normal(char *str)
{
	printf("%s\n", str);
}

void print_upper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			putchar(*str - 32);
		else
			putchar(*str);
		str++;
	}
	putchar('\n');
}

int main(void)
{
	char name[] = "John";

	printf("Original name: ");
	print_name(name, print_normal);

	printf("Uppercase name: ");
	print_name(name, print_upper);

	return (0);
}
