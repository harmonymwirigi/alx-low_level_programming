#include "main.h"
/**
 * print_rev - prints the string in reverse form
 * @s: input string
 * Return: nothing
 */
void print_rev(char *s)
{
int l = 0;
while (s[l] != '\0')
{
l++;
}
while (l)
{
_putchar(s[--l]);
}
_putchar('\n');
}
