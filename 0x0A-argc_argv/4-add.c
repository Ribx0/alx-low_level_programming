#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array str
 *
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	/*Declaring variables*/
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str)) /*cnt string*/

	{
		if (!isdigit(str[cnt])) /*check if str there are digit*/
		{
			return (0);
		}

		cnt++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count argms
 * @argv: Argms
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{

	/*Declaring variables*/
	int cnt;
	int str_to_int;
	int summ = 0;

	cnt = 1;
	while (cnt < argc) /*Goes through the whole array*/
	{
		if (check_num(argv[cnt]))

		{
			str_to_int = atoi(argv[cnt]); /*ATOI --> convert string to int*/
			summ += str_to_int;
		}

		/*Condition if one of the number contains symbols that are not digits*/
		else
		{
			printf("Error\n");
			return (1);
		}

		cnt++;
	}

	printf("%d\n", summ); /*print summ*/

	return (0);
}
