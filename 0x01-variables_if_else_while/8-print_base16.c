#include <stdio.h>
/**
 *  *main -> Write a program that prints all the numbers
 *
 *   *of base 16 in lowercase, followed by a new line.
 *
 *    *Return: Always 0 (Success)
 *
 */
int main(void)

{

	char ch;
	int n;
		for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar(10);
	return (0);
}


