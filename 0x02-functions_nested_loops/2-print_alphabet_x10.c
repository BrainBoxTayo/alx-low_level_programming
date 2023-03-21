#include"main.h"

/**
 * print_alphabet_x10- function to print out the alphabet
 * Description: this uses a while loop to print out the a-z 10 times
 * Return: no return value (void)
 */

void print_alphabet_x10(void)
{
	int ctr = 0;
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
