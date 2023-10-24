#include "main.h"

/**
 * print_diagsums - Print the sum of the diagonals of a square matrix
 * @a: Pointer to the square matrix
 * @size: Size of the square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i]; /* Sum of the main diagonal */
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
