#include "main.h"
#include <stdarg.h>
/**
  *print_chars - prints chars
  *@format: the string
  *@args: the arguments
  *Return: total
  */
int print_chars(const char *format, va_list args)
{
	int d i*;
	int total = 0, i = 0;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == '%' || format[i] == 'd'||
					format[i] == 'i')
			{
				if (format[i] == 'd')
				{
					d = va_arg(args, int);
					total += _writechar(d);
				}
				else if (format[i] == 'i')
				{
					i = va_arg(args, char *);
					total += print(s);
				}
				else if (format[i] == '%')
					total += _writechar('%');
			}
			else
			{
				total += _writechar('%');
				total += _writechar(format[i]);
			}
		}
		else
			total += _writechar(format[i]);
		i++;
	}
	return (total);
}
