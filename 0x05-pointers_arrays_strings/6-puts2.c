#include "main.h"
/**
 * _strlen - functions to get the string length
 * @s: input strings
 * Return: length
 */
int _strlen(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
return (l);
}
/**
 * puts2 - functions to print all characters in a string followed by new line
 * @str: input string
 * Return: nothing
 */
void puts(char *str)
{
int length = _strlen(str);
int k;
for (k = 0; k < length; k++)
{
_putchar(str[k]);
}
_putchar('\n');
}
