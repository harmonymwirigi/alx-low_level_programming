#include "main.h"
/**
 * Print alphabet_x10 - Print the alphabet 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int i;
int l;
for (i = 0; i < 10; i++)
{
  for (l = 97; l < 123; l++)
  {
   _putchar(l);
  }
  _putchar('\n');
}
}
