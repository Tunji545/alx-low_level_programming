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

	if (n < 0)
	{
		x = (-1 * (n % 10));
		_putchar(x + '0');
		return (x);
	}
	x = n % 10;
	_putchar(x + '0');
	return (x);
}
