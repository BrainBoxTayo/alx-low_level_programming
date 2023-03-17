#include<stdio.h>
/**
  * print - prints numbers using putchar function
  * Return: it is void so no return value
  */
void print(int n)
{
	putchar(n + '0');
}
/**
  * main - prints numbers from 0 to 10 using putchar
  * Return: returns 0
  */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		print(a);
	}
	putchar('\n');
	return (0);
}
