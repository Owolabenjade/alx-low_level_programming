#include "3-calc.h"

/**
 *  * main - Entry point for the program
 *   * @argc: The number of command-line arguments
 *    * @argv: An array of command-line argument strings
 *     *
 *      * Return: 0 for success, 98 for argument count error,
 *       * 99 for invalid operator, 100 for division by 0
 *        */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}


	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op_func = get_op_func(argv[2]);

	result = op_func(num1, num2);
	printf("%d\n", result);

	return (0);
}
