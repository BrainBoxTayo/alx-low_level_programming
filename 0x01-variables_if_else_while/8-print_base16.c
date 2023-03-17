#include<stdio.h>
/**
  * main - prints all single digit numbers of base 16
  * Return: returns 0 not 1
  */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		printf("%x", i);
	}
	putchar('\n');
	return (0);
}
