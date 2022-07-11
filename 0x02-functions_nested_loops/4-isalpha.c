#include "main.h"
/**
*  *_isalpha - checks for alphabetic characters
*
*   *@c: integer
*
*    *Return: 1
*/
int _isalpha(int c)
{
	int x;

	for ((x = 'a'; x <= 'z'; x++) || (x = 'A'; x <= 'Z'; x++))
	{
		if (x == c)
		{
			return (1);
		}
	}
	return (0);
}
