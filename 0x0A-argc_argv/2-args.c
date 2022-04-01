#include "main.h"
#include <stdio.h>
/**
 * main - function prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: nothing
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
