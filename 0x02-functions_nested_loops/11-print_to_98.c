#include "main.h"
/**
*  *print_to_98 - Function that prints from
*
*   *n - 98 natural numbers
*
*    *@n: integer
*/
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_printf(n);
		_printf(',');
		_printf(' ');
	}
}
