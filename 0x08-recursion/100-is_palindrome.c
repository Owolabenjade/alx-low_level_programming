#include "main.h" /* Include the header file */

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked for palindrome property.
 *
 * This function takes a string 's' and recursively checks
 * if it is a palindrome.
 * It compares the first and last characters of the string, and
 * if they match, it
 * recursively calls itself on the substring without
 * those characters. The function
 * continues this process until the string is empty or has
 * only one character, which
 * are considered palindromes.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);
	if (length <= 1)
	{
		return 1; /* Empty or single-character string is a palindrome */
	}
	return (check_palindrome(s, length));
}

/**
 * check_palindrome - Recursive helper function to check for a palindrome.
 * @s: The string to be checked for palindrome property.
 * @len: The length of the string.
 *
 * This recursive helper function compares the first and last characters of the
 * string 's' and checks if they match. If they match,
 * it calls itself on the substring
 * without those characters. The function continues this process
 * until the string is empty
 * or has only one character, which are considered palindromes.
 *
 * Return: 1 if 's' is a palindrome, 0 otherwise.
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
	{
		return (1); /* Empty or single-character string is a palindrome */
	}
	if (s[0] != s[len - 1])
	{
		return (0); /* Not a palindrome */
	}
	return (check_palindrome(s + 1, len - 2));
}

/**
 * _strlen - Computes the length of a string.
 * @s: The string to be measured.
 *
 * This function calculates the length of a string 's' recursively.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
