#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string s of any of the bytes in the string accept
 * @s: input string
 * @accept: input string
 * Returns:  pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = start;
		s++;
	}
	return (NULL);
}
