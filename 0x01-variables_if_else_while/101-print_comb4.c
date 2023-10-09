#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all possible different combinations of two digits
 * separated by commas and spaces, in ascending order, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
	{
		putchar(j + '0');
		putchar(j + '0');
		if (i != 8 || j != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	}
	putchar('\n');
	return (0);
}
