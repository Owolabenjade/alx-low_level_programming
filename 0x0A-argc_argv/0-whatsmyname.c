#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 *whatsamyname - Entry point of the program
 *Return: Always 0
*/
int whatsmyname(void)
{
		printf("%s\n", __FILE__);
			return (0);
}

/**
 *  * main - Entry point of the program for Task 1
 *   * @argc: The number of command-line arguments
 *    * @argv: An array containing the command-line arguments
 *     *
 *      * Return: Always 0
 *       */
int main(int argc, char *argv[])
{
		(void)argv; /* Unused parameter warning */
			printf("%d\n", argc - 1);
				return (0);
}
