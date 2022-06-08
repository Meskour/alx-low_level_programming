#include "main.h"

/**
 * print_alphabet_10x - prints alphabet x10 .. _putchar
 *
 * No Return required ..
*/

void print_alphabet_10x(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		int i = 0;
		while (i < 10)
		{
			_putchar(a);
			++i;
		}
		++a;
	}
	_putchar('\n');
}

