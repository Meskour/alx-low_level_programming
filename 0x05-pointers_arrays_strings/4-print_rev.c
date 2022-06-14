#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: pointer of string
 * Return: void
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);
	
	for (--i; i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
