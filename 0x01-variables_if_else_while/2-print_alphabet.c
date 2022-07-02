#include <stdio.h>
#include <ctype.h>
/*
 *
 *main -> Write a program that prints the
 *
 *alphabet in lowercase,
 *
 *Return: Always O (success)
 *
 **/




int main(void)

{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	putchar(10);
	return (0);



}
