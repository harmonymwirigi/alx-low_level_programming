#include "main.h"
#include <stdio.h>
/**
 * rev_string - functions that reverses
 * @s: input string
 * Return: nothing
 */
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
