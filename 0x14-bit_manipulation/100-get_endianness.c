#include"main.h"
/**
  * get_endianness - gets the endianness of the system
  * Return: 0 if Big endian 1 if little endian
  */
int get_endianness(void)
{
	int num = 1;
	char *c = (char *)&num;

	if (*c == 1)
	{
		return (1);
	}
	return (0);
}
