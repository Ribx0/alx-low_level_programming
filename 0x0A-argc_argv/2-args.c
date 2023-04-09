#include <stdio.h>
#include "main.h"

/**
 * main - prints all argmts it receives
 * @argc: nbr of argmts
 * @argv: array of argmts
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
		printf("%s\n", argv[l]);
	}

	return (0);
}
