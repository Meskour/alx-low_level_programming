#include "main.h"

/**
 * main - prints _putchar \n
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(ch[i]);
		++i;
	}
	_putchar('\n');

	return (0);
}
