#include"main.h"
#include<stdlib.h>
/**
  * string_nconcat -  concatenates two strings
  * @s1: string to be added
  * @s2: string to be added
  * @n: number of bytes of s2
  * Return: point to a newly allocated space in memory, which contains s1, fol
  * lowed by the first n bytes of s2, and null terminated
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sconc;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	/*counters for the sizes, j is just used so we do not overshooot*/
	/*the strlen of j*/
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n >= j)
		n = j;
	sconc = malloc((i + n + 1) * sizeof(char));
	if (sconc == NULL)
		return (NULL);
	for (j = 0; j < n; j++)
		*(sconc + i + j) = s2[j];
	for (i = 0; s1[i] != '\0'; i++)
		*(sconc + i) = s1[i];
	*(sconc + i + j) = '\0';
	return (sconc);
}
