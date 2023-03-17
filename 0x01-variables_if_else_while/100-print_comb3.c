#include<stdio.h>
/**
  * main - prints all combinations of single digit numbers of base 10
  * Return: returns 0 not 1
  */
int main(void)
{
	int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int index_storer = 0, index_max = 10;
	int i, j, a;

	do {
	for (a = index_storer; a < index_max; a++)
	{
		i = array[index_storer];
		j = array[a];
		if (i == j)
		{
			continue;
		}
		else
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	index_storer++;
	if (i == 8 && j == 9)
	{
		putchar('\n');
		index_storer = 0;
	}
	} while (index_storer);
	return (0);
}
