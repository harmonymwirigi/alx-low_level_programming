#include "main.h"
#include <stdio.h>
/**
 * _strlen - function to get the length of a string
 * @s: input string
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
 * rev_string - functions to get the reverse of a string
 * @s: input string
 * Return: nothing
 */
void rev_string(char *s)
{
int i, l;
char a, z;
l = _strlen(s) - 1;
i = 0;
while (i < l)
{
a = s[i];
z = s[l];
s[i++] = z;
s[l--] = a;
}
}
