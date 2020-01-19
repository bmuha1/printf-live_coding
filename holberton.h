#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>

typedef struct type_s
{
	char c;
	int (*f)(va_list);
} type_t;

int _printf(const char *format, ...);
int _putchar(char c);

int (*get_type(char c))(va_list);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int int_recursive(int i, int printed);

#endif
