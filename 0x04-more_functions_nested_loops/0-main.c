#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the _isupper function
 * by testing it with both uppercase and lowercase characters.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
