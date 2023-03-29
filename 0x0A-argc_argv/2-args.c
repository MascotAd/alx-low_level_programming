#include "main.h"
#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 * @argc: The argument counter
 * @argv: The argument values
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
