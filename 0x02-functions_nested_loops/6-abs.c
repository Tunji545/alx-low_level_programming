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
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	return (n);
}
