#include "main.h"
/**
 * _puts - function that prints string followed by newline
 * @str: input string
 * Return: nothing
 */
void _puts(char *str)
{
int l = 0;
while (str[l] != '\0')
{
_putchar(str[l]);
l++;
}
_putchar('\n');
}
