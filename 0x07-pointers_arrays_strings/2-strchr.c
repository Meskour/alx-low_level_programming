#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locates..
 * Return: first occurrence ..
*/

char *_strchr(char *s, char c)
{
	int i, n;

	char *dest = NULL;
	
	int size = sizeof(s);

	for (i = 0; i < size; i++)
	{
		if (s[i] == c)
		{
			for (n = 0; n < i; n++)
			{
				dest = &s[n++];
			}
		}
	}

	return (dest);
}
