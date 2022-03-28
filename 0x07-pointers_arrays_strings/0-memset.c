#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to by s with the constant byte b
 * @s: pointer variable to point the first n bytes
 * @b: constant input character
 * @n: integers which helps to get the first vaiables
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
