#include<stdio.h>
/**
  * main - prints alphabet in lower case and excludes q and e
  * Return: returns 0
  */
int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
