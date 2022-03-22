#include "main.h"
#include <stdio.h>
/**
 * print_array - this function n elements of an arrays of integers
 * @a: an input array
 * @n: number of element of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i = 0;
for (; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
putchar('\n');
}
