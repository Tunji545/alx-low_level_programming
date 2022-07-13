#include "main.h"
/**
*  *print_to_98 - Function that prints from
*
*   *n - 98 natural numbers
*
*    *@n: integer
*
*     *Return : 0
*/
void print_to_98(int n)
{
	int i;

	for (n = 0; n <= 98; n++)
	{
		_printf(n);
		_printf(',');
		_printf(' ');
	}
	return (0);
}
