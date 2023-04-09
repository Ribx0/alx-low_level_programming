#include <stdio.h>
#include "main.h"

/**
 * main - print the nbr of argmts passed to the program
 * @argc: nbr of argmts
 * @argv: array of argmts
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
