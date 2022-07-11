#include "main.h"
/**
*  *_isLower - check for lowercase
*
*  *@c: integer
*
*    *Return: 1
*/
int _isLower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	_putchar('\n');
	return (0);
}
