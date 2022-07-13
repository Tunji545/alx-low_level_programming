#include "main.h"
/**
*  *_isUpper - Checks for upper case
*
*   *@c: integer
*
*    *Return: 0
*/
int _isUpperCase(int c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
		{
			return (1);
		}
		return (0);
	}
}
