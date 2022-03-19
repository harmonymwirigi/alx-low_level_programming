#include "main.h"
/**
 * print_sign - show if number is greatter than 0, equal to 0 or less than zero
 * @n: The input number as an integer
 * Return: 1 if number greater than 1, 0 if number is equal to zero
 * -1 if number less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
