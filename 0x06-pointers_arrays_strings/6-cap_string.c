#include"main.h"
/**
  * cap_string - converts lowercase letters of words to uppercase
  * @str: string to be manipulate
  * Return: pointer to str
  */

char *cap_string(char *str)
{
	int i, string_l;

	for (string_l = 0; *(str + string_l) != '\0'; string_l++)
		;
		for (i = 0; i < string_l; i++)
		{
			if (str[i] <= 122 && str[i] >= 97)
			{
				if (i == 0)
				{
					str[i] -= 32;
				}
				else
				{
					if (str[i - 1] == 32 || str[i - 1] == 9 || str[i - 1] == 10
					|| str[i - 1] == 44 || str[i - 1] == 59 || str[i - 1] == 46
					|| str[i - 1] == 33 || str[i - 1] == 63 || str[i - 1] == 34
					|| str[i - 1] == 40 || str[i - 1] == 41 || str[i - 1] == 123
					|| str[i - 1] == 125)
					{
						str[i] -= 32;
					}
				}
			}
		}
	return (str);
}
