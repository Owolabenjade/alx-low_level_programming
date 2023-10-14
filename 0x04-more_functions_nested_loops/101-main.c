#include "main.h"

/**
 * main - Entry point of the program
 *
 * Description: This program demonstrates the usage of the `print_number`
 * function by calling it with different integer arguments.
 * The `print_number` function is expected to display the integers provided
 * as output using the `_putchar` function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_number(98);
	_putchar('\n');
	print_number(402);
	_putchar('\n');
	print_number(1024);
	_putchar('\n');
	print_number(0);
	_putchar('\n');
	print_number(-98);
	_putchar('\n');
	return (0);
}
