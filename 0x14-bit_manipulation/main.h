#ifndef MAIN_H
#define MAIN_H
#include<stddef.h>
#include<stdio.h>
unsigned int binary_to_uint(const char *b);
int _atoi(char *s);
char *_strcpy(char *dest, char *src);
void print_array(int *a, int n);
void puts_half(char *str);
void puts2(char *str);
void rev_string(char *s);
void print_rev(char *s);
void _puts(char *c);
int _strlen(char *s);
int _putchar(char c);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int n);
int print_last_digit(int n);
void jack_bauer(void);
int add(int num1, int num2);
void print_to_98(int n);
int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_most_numbers(void);
void print_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
#endif
