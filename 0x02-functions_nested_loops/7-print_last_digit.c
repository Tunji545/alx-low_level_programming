#include "main.h"
/**
*  *print_last_digit - prints the last
*
*   *digit of a number
*
*    *@n: integer
*
*     *Return: 0
*/
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	putchar(x);
	putchar('\n');
	return (0);
}
