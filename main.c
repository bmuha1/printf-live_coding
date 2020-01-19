#include "holberton.h"
#include <stdio.h>

int main(void)
{
	int real, mine;

	mine = _printf("char: %c\n", 'B');
	real = printf("char: %c\n", 'B');
	printf("%d %d\n", mine, real);

	mine = _printf("string: %s\n", "This is a string!");
	real = printf("string: %s\n", "This is a string!");
	printf("%d %d\n", mine, real);

	mine = _printf("int: %d %i\n", 123, 456789);
	real = printf("int: %d %i\n", 123, 456789);
	printf("%d %d\n", mine, real);

	return (0);
}
