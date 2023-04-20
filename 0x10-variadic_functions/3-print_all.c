#include"variadic_functions.h"
/**
  * print_char - helper for char
  * @var: va_list
  * Return: Nothing
  */
void print_char(va_list var)
{
	char c = va_arg(var, int);

	printf("%c", c);
}
/**
  * print_int - helper for int
  * @var: va_list
  * Return: Nothing
  */
void print_int(va_list var)
{
	int i = va_arg(var, int);

	printf("%d", i);
}
/**
  * print_float - helper for float
  * @var: va_list
  * Return: Nothing
  */
void print_float(va_list var)
{
	double f = va_arg(var, double);

	printf("%f", f);
}
/**
  * print_string - helper for string
  * @var: va_list
  * Return: Nothing
  */
void print_string(va_list var)
{
	char *s = va_arg(var, char *);

	printf("%s", s);
}

/**
  * print_all - prints anything
  * @format: list of types of arguments passed to the function
  * Return: Nothing
  */
void print_all(const char * const format, ...)
{
	va_list newVar;
	int index = 0;
	int size = 0, flag;

	while (format[size] != '\0')
		size++;
	va_start(newVar, format);
	while (format[index] != '\0')
	{
		flag = 0;
		switch (format[index])
		{
			case ('c'):
				print_char(newVar);
				break;
			case ('i'):
				print_int(newVar);
				break;
			case ('f'):
				print_float(newVar);
				break;
			case ('s'):
				print_string(newVar);
				break;
			default:
				flag = 1;
				break;
		}
		if (index == size - 1)
			flag = 1;
		if (!flag)
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(newVar);
}
