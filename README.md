# printf Live Coding

## Description

The printf project is the first challenging pair project completed by students at Holberton School. Students are expected to write their own printf function, printing out each character using only the write system call and returning the number of characters printed.

This simplified version of the project was live coded for Holberton School students on October 30, 2019. Before the live coding, we had a discussion on software architecture and the benefits of using function pointers rather than a switch statement.

The 18-minute video is available here: [https://www.youtube.com/watch?v=oqLbyqByDJc](https://www.youtube.com/watch?v=oqLbyqByDJc)

## Requirements

* Allowed editors: vi, vim, emacs
* All files are compiled on Ubuntu 14.04 LTS
* Programs and functions are compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Code should use the Betty style. It is checked using betty-style.pl and betty-doc.pl
* The use of global variables is prohibited
* No more than 5 functions per file
* The prototypes of all functions should be included in a header file called holberton.h
* All header files should be include guarded

## Prototype

```bash
int _printf(const char *format, ...);
```

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic *.c
```

## Usage

```bash
int _printf(const char *format, ...);
```

## Format Specifiers

### Supported Types

| Type  | Output |
|:-----:|-----------|
| c       | Single character |
| s       | String of characters |
| d or i  | Signed decimal integer |

### Return Value

Return the number of characters written, excluding the terminating null character to send the string.

## Examples

```c
$ cat main.c
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
$ gcc -Wall -Werror -Wextra -pedantic *.c
$ ./a.out
char: B
char: B
8 8
string: This is a string!
string: This is a string!
26 26
int: 123 456789
int: 123 456789
16 16
```

## Author
* **Brent Muha** - [bmuha1](https://github.com/bmuha1)