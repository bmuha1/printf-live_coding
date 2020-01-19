#include "holberton.h"

int _printf(const char *format, ...)
{
	va_list valist;
	int i;
	int printed = 0;

	va_start(valist, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1])
		{
			printed += (*get_type(format[i + 1]))(valist);
			i++;
		}
		else
			printed += _putchar(format[i]);
	}

	va_end(valist);
	return (printed);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
