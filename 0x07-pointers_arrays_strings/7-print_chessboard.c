#include "main.h"

/**
 * _putchar - Write a character to standard output
 * @c: The character to print
 * Return: 1 (Success), -1 (Failure)
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}

/**
 * print_chessboard - Print a chessboard
 * @a: 2D array representing the chessboard
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
