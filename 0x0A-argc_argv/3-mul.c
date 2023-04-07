#include<ctype.h>
#include"main.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * main - multiplies the arguents passed to the program
  * @argc: number of arguments
  * @argv: name of the arguments
  * Return: 0(success) / 1(Error)
  */

int main(int argc, char **argv)
{
	int mult = 1;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	mult = _atoi(argv[1]) * _atoi(argv[argc - 1]);
	printf("%d\n", mult);
	return (0);
}
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer value of the string
 */
int _atoi(char *s)
{
	unsigned int number = 0, mult = 1;
	int size, sign = 1, i, tester = 0;

	for (size = 0; *(s + size) != '\0'; ++size)
		;
	for (i = size - 1; i >= 0; i--)
	{
		/*tester helps to keep the signs at beginning of the string*/
		/*mult helps with place and number stores number*/
		if (isdigit(s[i]))
		{
			tester = 1;
			number += mult * (s[i] - '0');
			mult *= 10;
		}

		else if (tester && (s[i] == '+' || s[i] == '-'))
		{
			(s[i] == '+') ? (sign *= 1) : (sign *= -1);
		}
		else
		{
			continue;
		}
	}
	if (sign < 0)
	{
		number = -number;
	}
	return (number);
}
