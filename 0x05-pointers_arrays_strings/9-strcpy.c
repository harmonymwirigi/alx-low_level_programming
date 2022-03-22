#include "main.h"
/**
 * _strcpy - function that copies string pointedto buffer pointedto by dest
 * @dest: destinations where the source will be copied
 * @src: source string
 * Return: destination
 */
char *_strcpy(char *dest, char *src)
{
char *n = dest;
while (*src)
{
*dest++ = *src++;
}
return (n);
}
