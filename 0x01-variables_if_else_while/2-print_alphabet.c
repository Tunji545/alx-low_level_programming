#include <stdio.h>
#include <ctype.h>
/**
 *  *main -> assign a random number
 *
 *   *and print the last digit of the
 *
 *    *Return: Always 0 (Success)
 *
 */
int main(void)

{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar(10);
	return (0);
}
