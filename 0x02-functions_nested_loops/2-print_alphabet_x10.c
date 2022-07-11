#include "main.h"
/**
*  *print_alphabet_x10 - print all alphabet in
*
*   *lowercase 10times followed by a newline
*/
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}
