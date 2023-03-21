#include"main.h"

/**
 * print_alphabet- function to print out the alphabet
 * Return: no return value (void)
 */

void print_alphabet(void)
{
	int ctr;
	char alpha;

	while (ctr < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		ctr++;
	}
}
