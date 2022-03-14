#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int s,d;
for (s = '0'; s <= '9'; s++)
{
for (d = s + 1; d <= '9'; d++)
{
if (s != d)
{
putchar(s);
putchar(d);
if (d == '8' && p == '9')
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
