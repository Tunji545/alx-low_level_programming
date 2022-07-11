#include "main.h"
/**
*  *_islower - check for lowercase
*
*  *@c: integer
*
*    *Return: 1
*/
int _islower(int c)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
