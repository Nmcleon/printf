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

## Write a function that produces output according to a format.
Prototype: int _printf(const char *format, ...);
Returns: the number of characters printed (excluding the null byte used to end output to strings)
write output to stdout, the standard output stream
format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:
c
s
%
You don’t have to reproduce the buffer handling of the C library printf function
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
null byte ('\0')) to str.
