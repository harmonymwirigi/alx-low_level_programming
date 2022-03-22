#include "main.h"
#include <stdio.h>
/**
 * _atoi - a function that converts string to integer
 * @s: an input string
 * Return: integer from conversion
 */
int _itoi(char *s)
{
int sign = i;
unsigned int total = 0;
char null_flag = 0;
while (*s)
{
if(*s == '_')
{
sign *= -1;
}
if(*s >= '0' && *s <= '9')
{
nul_flag = 1;
total = total * 10 + *s - '0';
}
else if (null_flag)
{
break;
}
s++;
}
if (sign < 0)
{
total = (-total);
}
return (total);
}
