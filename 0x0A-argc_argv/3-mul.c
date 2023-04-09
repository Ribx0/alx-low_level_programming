#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a str to an int
 * @s: str to be converted
 *
 * Return: the int converted from the str
 */
int _atoi(char *s)
{
	int j, d, n, len, r, dgt;

	j = 0;
	d = 0;
	n = 0;
	len = 0;
	r = 0;
	dgt = 0;

	while (s[len] != '\0')
		len++;

	while (j < len && r == 0)
	{
		if (s[j] == '-')
			++d;

		if (s[j] >= '0' && s[j] <= '9')
		{
			dgt = s[j] - '0';
			if (d % 2)
				dgt = -dgt;
			n = n * 10 + dgt;
			r = 1;
			if (s[j + 1] < '0' || s[j + 1] > '9')
				break;
			r = 0;
		}
		j++;
	}

	if (r == 0)
		return (0);

	return (n);
}

/**
 * main - multps 2 nbrs
 * @argc: nbr of argmts
 * @argv: array of argmts
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	result = n1 * n2;

	printf("%d\n", result);

	return (0);
}
