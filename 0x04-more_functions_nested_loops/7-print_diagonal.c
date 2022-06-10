#include "main.h"

/**
 * print_line - draws a diagonal line ..
 *
 * @n: input n nomber of times of \
 *
 * Retrun: void
*/

void print_diagonal(int n)
{
	int i = 1;

	if (n <= 0)
		_putchar('\n');
	else
	{

		while (i <= n)
		{
			int c = 1;

			while (c <= i)
			{
				_putchar(' ');
				++c;
			}

			++i;
			_putchar(92); /** 92 == \ */
			_putchar('\n');
		}
	}
}
