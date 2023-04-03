#include"main.h"

/**
  * _memset - fills the first n bytes of the memory area pointe d to by s
  * with the constant byte b
  * @s: string
  * @b: byte used to manipulate the string
  * @n: size of bytes
  */

char *_memset(char *s, char b, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return s;
}
