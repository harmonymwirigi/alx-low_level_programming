#include "main.h"
/**
 * _strlen - function to the length of string
 * @s: input string in which we return the length
 * return: string length
 */
int _strlen(char *s)
{
int n = 0;
while (s[n] != '\0')
{
n++;
}
return (n);
}
