#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: nbr of args
 * @argv: arr of args
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int by, l;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	by = atoi(argv[1]);

	if (by < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (l = 0; l < by; l++)
	{
		if (l == by - 1)
		{
			printf("%02hhx\n", ar[l]);
			break;
		}
		printf("%02hhx ", ar[l]);
	}
	return (0);
}
