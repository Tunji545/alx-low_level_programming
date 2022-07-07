#include "main.h"
#include <ctype.h>
/**
*  *main - prints alphabets in lowercase
*
*   *followed by a new line
*
*    *Return: 0;
*/
int main(void)

{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		_putchar(tolower(x));
	}
	_putchar(10);
	return (0);
}
