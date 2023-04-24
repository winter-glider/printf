#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
  *_printf - mimics printf specifiers s,c and %
  *@format: number of arguments
  *Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	int i = 0, total = 0;
	char *s, c;
	va_list args;

	if (!format)
		return (-1);
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == '\0')
			return (-1);
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == 'c')
			{
				c = va_arg(args, int);
				total += write_char(c);
			}
			else if (format[i] == 's')
			{
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(null)";
				total += print(s);
			}
			else if (format[i] == '%')
				total += write_char('%');
		}
		else
			total += write_char(format[i]);
		i++;
	}
	va_end(args);
	return (total);
}
