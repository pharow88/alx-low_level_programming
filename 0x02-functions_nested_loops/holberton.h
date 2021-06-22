#ifndef HOLBERTON_H
#define HOLBERTON_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct formate - structure to choose the format
 * @ftype: type of format to print
 * @funty: function for printing
 */

typedef struct formate

{

	char *ftype;

	int (*funty)(va_list);

} f_type;

int _putchar(char c);
void print_alphabet(void);
void print_alphabet_x10(void);
int _islower(int c);
int _isalpha(int c);
int print_sign(int n);
int _abs(int);
int print_last_digit(int);
void jack_bauer(void);
void times_table(void);
int add(int, int);
void print_to_98(int n);
void print_times_table(int n);
int (*get_format(char s))(va_list);
int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int print_int(va_list arg);
int print_decimal(va_list arg);
int print_binary(va_list arg);
int print_reverse(va_list arg);
int print_rot13(va_list arg);
int _islower(int c);

void print_alphabet(void);
void print_alphabet_x10(void);
void test_islower(int n);
#endif
