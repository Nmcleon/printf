# 0x11. C - printf
## Requirements
* Allowed editors: vi, vim, emacs
* gcc 4.8.4
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* The prototypes of all your functions should be included in your header file called main.h
* Global variables are not allowed
* No more than 5 functions per file

## Authorized functions and macros
* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)

## Concepts
For this project, we expect you to look at these concepts:
* Group Projects
* Pair Programming - How To
* Flowcharts
* Technical Writing

## Resources
* Secrets of printf
* Group Projects concept page (Don’t forget to read this)
* Flowcharts concept page

## Compilation
''' $ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c '''

## Write a function that produces output according to a format.
* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
  * c
  * s
  * %
## Handle the following conversion specifiers:
  * d
  * i
## Handle the following custom conversion specifiers:
* b: the unsigned int argument is converted to binary
## Handle the following conversion specifiers:
  * u
  * o
  * x
  * X
## Use a local buffer of 1024 chars in order to call write as little as possible
## Handle the following custom conversion specifier:
* S : prints the string.
* Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters
## Handle the following conversion specifier: p.
## Handle the following flag characters for non-custom conversion specifiers:
  * +
  * space
  * #
## Handle the following length modifiers for non-custom conversion specifiers:
  * l
  * h
  * Conversion specifiers to handle: d, i, u, o, x, X
## Handle the field width for non-custom conversion specifiers
## Handle the precision for non-custom conversion specifiers
## Handle the 0 flag character for non-custom conversion specifiers
## Handle the - flag character for non-custom conversion specifiers
## Handle the following custom conversion specifier:
  * r : prints the reversed string
## Handle the following custom conversion specifier:
  * R: prints the rot13'ed string
## All the above options work well together

# AUTHORS
* Noah K. | [Github](https://github.com/Nmcleon)
* O'Brien Abucheri | [Github](https://github.com/Abucheri)
