#include"3-calc.h"
#include<stdio.h>
#include<stdlib.h>
/**
  * get_op_func - selects correct function to perform the operation asked by
  * the user.
  * @s: operator passed to the program
  * Return: pointer to the correct function or NULL if operator not found
  */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	__attribute__((unused))int i;

	i = 0;
	while (ops[i].op[0])
	{
		if (ops[i].op[0] == s[0] && s[1] == '\0')
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
