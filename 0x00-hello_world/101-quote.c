#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * This program writes a specific message to the standard error stream (file
 * descriptor 2). The message includes a quote, attribution, and a date.
 *
 * Return: Always returns 1 to indicate an error.
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
