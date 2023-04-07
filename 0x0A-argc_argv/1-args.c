#include<stdio.h>
/**
  * main - prints the number of arguments to the program
  * @argc: number of arguments
  * @argv: arguents
  * Return: 0
  */

int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
