#include "main.h"
#include "stdlib.h"
/**
*  *_abs - computes the absolute
*
*   *value of an integer
*
*    *@n: integer
*
*     *Return: 0
*/
int _abs(int n)
{
	int x;

	x = abs(n) % 10;
	_putchar(x);
	_putchar('\n');
	if (n < 0)
	{
		x = -x;
		_putchar(x);
		_putchar('\n');
	}
	return (0);
}
