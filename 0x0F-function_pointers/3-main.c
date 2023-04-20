#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>

/**
  * main - the main function
  * @argc: number of arguments
  * @argv: arguments
  * Return: Zero
  */
int main(int argc, char **argv)
{
	int a, b, c;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(argv[2]);
	c = op_func(a, b);
	printf("%d\n", c);
	return (0);
}
