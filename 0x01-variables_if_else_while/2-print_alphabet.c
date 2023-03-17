#include<stdio.h>
/**
  * main - prints alphabet in lower case
  * Return: returns 0
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
