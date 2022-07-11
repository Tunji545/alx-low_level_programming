#include "main.h"
/**
*  *isLower - check for lowercase
*
*  *@c: integer
*
*    *Return: 1
*/
int isLower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			return (1);
			return isLower(c);
		}
	}
	_putchar('\n');
	return (0);
}
