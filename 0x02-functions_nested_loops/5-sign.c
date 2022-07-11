#include "main.c"
/**
*  *print_sign - prints the sign
*
*   *of a number
*
*    *@n: integer
*
*     *Return: 1
*/
int print_sign(int n)
{
	int n;

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchae('-');
		return (-1);
	}
	_purchar('0');
	return (0);
}
