#include"main.h"
/**
  * binary_to_uint - converts a binary number to an unsigned int
  * @b: pointing to a string of 0 and 1 chars
  * Return: converted number
  * NULL if the string contains an alien character !(0 or 1)
  */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len;
	unsigned int numConv = 0;

	for (len = 0; b[len] != '\0'; ++len)
		;
	if (b == NULL)
		return (0);
	if (len > 32)
	{
		return (0);
	}
	len--;
	while (len >= 0)
	{
		if (b[i] == 48)
		{
			numConv += (0 * (1 << len));
		}
		else if (b[i] == 49)
		{
			numConv += (1 * (1 << len));
		}
		else
		{
			return (0);
		}
		len--;
		i++;
	}
	return (numConv);
}
