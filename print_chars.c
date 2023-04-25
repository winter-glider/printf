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
	char *s, c;
	int total = 0, i = 0, d, k;

	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] != '\0')
		{
			i++;
			if (format[i] == '%' || format[i] == 'c' ||
					format[i] == 's')
			{
				if (format[i] == 'c')
				{
					c = va_arg(args, int);
					total += write_char(c);
				}
				else if (format[i] == 's')
				{
					s = va_arg(args, char *);
					if (!s)
						s = "(null)";
					total += print(s);
				}
				else if (format[i] == 'i')
				{
					k = va_arg(args, int);
					total += write_char(k);
				}
				else if (format[i] == '%')
					total += write_char('%');
			}
			else
			{
				total += write_char('%');
				total += write_char(format[i]);
			}
		}
		else
			total += write_char(format[i]);
		i++;
	}
	return (total);
}
