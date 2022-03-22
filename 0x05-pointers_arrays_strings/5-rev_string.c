#include "main.h"
#include <stdio.h>
/**
 * rev_string - functions that reverses
 * @s: input string
 * Return: nothing
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
void rev_string(char *s)
{
int i, l;
char a, z;
l = _strlen(s);
i = 0;
while (i < l)
{
a = s[i];
z = s[l];
s[i++] = z;
s[l--] = a;
}
}
