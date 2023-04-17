#include<stdio.h>
#define FILENAME __FILE__
/**
  * main - prints the name of the file that the program was compiled from
  * Return: 0
 */

int main(void)
{
	printf("%s\n", FILENAME);
	return (0);
}
