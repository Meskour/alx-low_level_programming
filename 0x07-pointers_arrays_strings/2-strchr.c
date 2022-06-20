#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locates..
 * Return: first occurrence ..
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; *s != '\0'; i++)
		if (s[i] == c)
			return s + i;

	if (s[i] == c)
		return s + i;

	return ('\0');
}