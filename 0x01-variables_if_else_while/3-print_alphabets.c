#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char upper;
for(ch = 'a';ch < 'z';ch++)
{
putchar(ch);
}
for(upper = 'A';upper < 'Z';upper++)
{
putchar(upper);
}
putchar('\n');
return 0;
}
