#include "main.h"
/**
*  *print_alphabet - prints all alphabets
*
*   *in lowercase and end with a new line
*
*    *Return: 0
*/
void print_alphabet(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		_putchar(x);
	}
	_putchar(10);
	return (0);
}
