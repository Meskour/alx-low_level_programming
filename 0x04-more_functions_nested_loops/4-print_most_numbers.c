#include "main.h"

/**
 * print_most_numbers - print 01356789
*/

void print_most_numbers(void)
{
	int i = 0;

	while ((i < 9))
	{
		++i;
		if (i != 2 && i != 4)
			_putchar(i + 48);
	}
	_putchar('\n');
}
