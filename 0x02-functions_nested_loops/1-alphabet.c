#include "main.h"

/**
 * main - prints a to z with _putchar
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a = "a";
	char z = "z";

	while (a <= z)
	{
		_putchar(a);
		++a;
	}
	_putchar('\n');

	return (0);
}
