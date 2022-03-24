#include "main.h"
/**
* _strcmp - function that compares two strings
* @s1: input string one
* @s2: input string two
* Return: the defferent between two strings
*/
int _strcmp(char* s1, char* s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++, s2++;
	}
	return (*s1 - *s2);
}