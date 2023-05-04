#include"main.h"
/**
  * get_bit - gets the value of a bit at the given index
  * @n: number
  * @index: index we are lookin gat
  * Return: index or -1(error)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	if (index > 63)
	{
		return (-1);
	}

	if ((n >> index) & 1)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	return (i);
}
