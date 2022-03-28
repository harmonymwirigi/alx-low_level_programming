#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destiny char
 * @src: pointer to the source
 * @n: input interger
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	#include "main.h"
/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destiny char
 * @src: pointer to the source
 * @n: input interger
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
