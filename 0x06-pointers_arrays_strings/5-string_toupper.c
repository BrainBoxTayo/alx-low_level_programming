#include"main.h"
/**
  * string_toupper - converts lowercase letters to uppercase
  * @str: string to be manipulated
  * Return: pointer to str
  */

char *string_toupper(char *str)
{
	int i, string_l;

	for (string_l = 0; *(str + string_l) != '\0'; string_l++)
		;
	for (i = 0; i < string_l; i++)
	{
		if (*(str + i) <= 122 && *(str + i) >= 97)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
