#include "main.h"
#include <stdarg.h>
/**
  *_printf - mimics printf specifiers s,c and %
  *@format: number of arguments
  *Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	int i = 0, total = 0;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	total += print_chars(format, args);

	va_end(args);
	return (total);
}
