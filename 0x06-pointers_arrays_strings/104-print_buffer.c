#include<stdio.h>
#include"main.h"
/**
  * print_buffer - prints a buffer
  * @b: buffer string
  * @size: size of bytes to be printed
  * Return: nothing
  */

void print_buffer(char *b, int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		printf("%08x", b[i]);
		for (; i < i + 10; i++)
		{
			printf("works");
		}
	}
	return;
}
