#include <stdio.h>
#include <stdlib.h>

int is_palindrome(int n)
{
		int reversed = 0, original = n, remainder;

			while (n != 0) {
						remainder = n % 10;
								reversed = reversed * 10 + remainder;
										n /= 10;
											}

				return (original == reversed);
}

int main(void)
{
		int i, j, max_palindrome = 0;

			for (i = 100; i <= 999; i++) {
						for (j = i; j <= 999; j++) {
										int product = i * j;
													if (is_palindrome(product) && product > max_palindrome) {
																		max_palindrome = product;
																					}
															}
							}

				printf("%d", max_palindrome);
					return (0);
}
