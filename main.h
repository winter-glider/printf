#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print(char *str);
int write_char(char s);
int print_chars(const char *str, va_list args);
int print_number(int num);

#endif
