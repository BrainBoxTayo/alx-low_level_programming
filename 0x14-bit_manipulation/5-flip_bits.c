#include"main.h"
/**
  * flip_bits - gets number of bits needed to change n to m
  * @n: num1
  * @m: num 2
  * Return: number of bits to be flipped
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, index = 0, i;

	index = (n ^ m);
	for (i = 0; i < 63; i++)
	{
		if ((index >> i) & 1)
		{
			count++;
		}
	}
	return (count / 2);	
}
