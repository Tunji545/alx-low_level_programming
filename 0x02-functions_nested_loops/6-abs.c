#include "main.h"
#include "stdio.h"
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
	printf("%d\n", x)
	if (n < 0)
	{
		x = -x;
		printf("%d\n", x);
	}
	return (0);
}
