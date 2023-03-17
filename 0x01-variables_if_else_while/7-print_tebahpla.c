#include<stdio.h>
/**
  * main - prints alphabet in lower case
  * Return: returns 0
  */
int main(void)
{
	char a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
