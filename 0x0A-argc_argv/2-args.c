#include "main.h"
#include <stdio.h>
/**
 * main - function prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int i = 0;
	if (i > argc)
	{
		for (;i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
