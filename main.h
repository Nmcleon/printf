#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

/**
 * struct special_formats - Struct to select specifiers
 *
 * @c: data type
 * @f: The function associated
 */
typedef struct special_formats
{
	char *c;
	void (*f)(va_list *, int, int *);
} s_format;

int _putchar(char c);
int _printf(const char *, ...);
int check_input(const char *format, va_list *);
int print_output(const char *format, va_list *);
int check_for_format(char, va_list *, int, int *count);
void print_char(va_list *, int, int *);
void print_string(va_list *, int, int *);
void _puts(char *, int *);
void print_int(va_list *, int, int *);
void print_number(int, int *);

#endif
