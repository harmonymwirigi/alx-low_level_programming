#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - a function that prints a string, followed by a new line.
 * @s: An input string to printing
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		printf(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
