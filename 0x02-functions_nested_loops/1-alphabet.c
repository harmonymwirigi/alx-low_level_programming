#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char a;
for(a = 'a';a < 'z';a++)
{
_putchar(a);
}
_putchar('\n');
}
int main(void)
{
print_alphabet();
return (0);
}
