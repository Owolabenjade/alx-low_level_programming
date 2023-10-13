#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the _isdigit function
 * by testing it with different characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
