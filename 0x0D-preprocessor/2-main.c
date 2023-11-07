/**
 *  * main - Entry point of the program
 *   *
 *    * Description:
 *     *   This program prints the name of the source file it was compiled from.
 *      *   It utilizes the __FILE__ predefined macro to obtain the file name and
 *       *   prints it to the standard output.
 *        *
 *         * Return:
 *          *   0 - Indicates successful execution
 *           */
int main(void)
{
		printf("%s\n", __FILE__);  /* Print the source file name */
			return 0;  /* Return 0 to indicate successful execution */
}
