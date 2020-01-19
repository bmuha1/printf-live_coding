#include "holberton.h"

int print_int(va_list valist)
{
	int i = va_arg(valist, int);

	return (int_recursive(i, 0));
}

int int_recursive(int i, int printed)
{
	if (i > 9)
		printed += int_recursive(i / 10, printed);

	return (printed + _putchar(i % 10 + '0'));
}

int print_char(va_list valist)
{
	char c = va_arg(valist, int);

	return (_putchar(c));
}

int print_string(va_list valist)
{
	char *s = va_arg(valist, char *);
	int i;

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
