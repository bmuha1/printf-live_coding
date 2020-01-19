#include "holberton.h"

int (*get_type(char c))(va_list)
{
	type_t t[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}
	};
	int i;

	for (i = 0; t[i].c != '\0'; i++)
		if (t[i].c == c)
			return (t[i].f);

	return (0);
}
