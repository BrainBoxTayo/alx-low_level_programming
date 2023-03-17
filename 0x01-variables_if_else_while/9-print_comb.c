#include<stdio.h>
/**
  * print - this function prints the digits from main
  * @i: storer for the digits in output
  *
  * Return: no return from void function
  */
void print(int i)
{
	putchar(i + '0');
	if (i == 9)
	{
		putchar('\n');

	}
	else
	{
		putchar(',');
		putchar(' ');
	}
}
/**
  * main - prints all combinations of single digit numbers of base 10
  * Return: returns 0 not 1
  */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		print(i);
	}
	return (0);
}
