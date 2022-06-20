#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character to locates..
 * Return: first occurrence ..
*/

char *_strchr(char *s, char c)
{
	int i, n;

	char *dest;


	for (i = 0; i < 5; i++)
	{
		if (s[i] == c)
		{
			for (n = 0; n < 3; n++)
			{
				dest = &s[n++];
			}
		}
	}
	
	return (dest);
}
