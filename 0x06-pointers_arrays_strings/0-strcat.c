#include "main.h"
/**
* _strcat - this function concatenates two strings 
* @dest: - input destiny string one
* @src: - input source strign
* Return: concatenated character
*/
char* _strcat(char* dest, char* src)
{
char* temp = dest;

while (*dest)
	dest++;

while (*src)
	*dest++ = *src++;

*dest = '\0';
return (temp);
}