#include "main.h"
#include "stdio.h"
#include "stdlib.h"
#include <limits.h>
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
	unsigned int x;
	int const mask = mask = n >> sizeof(int) * (CHAR_BIT - 1);

	x = (n + mask) ^ mask;
	putchar(x);
	putchar('\n');
	return (0);
}
