#include <stdio.h>
/**
 *  *main -> Write a program that prints the
 *
 *   * in lowercase, followed by a new line.
 *
 *    *Return: Always 0 (Success)
 *
 */
int main(void)

{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	{

		if (ch != 'q' && ch != 'e')

		{

			putchar(ch);

		}

	}
	putchar(10);
	return (0);
}


