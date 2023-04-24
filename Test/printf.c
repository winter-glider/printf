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
	int i = 0;
	char *s, c;
	va_list args;

    va_start(args, format);
    while (format[i] != '\0')
    {
	    if (format[i] == '%')
	    {
		    i++;
		    if (format[i] == 'c')
		    {
			    c = va_arg(args, int);
			    write_char(c);
		    }
		    else if (format[i] == 's')
		    {
			    s = va_arg(args, char *);
			    if (s != NULL)
				    print(s);
			    else
				    print("(null)");
		    }
		    else if (format[i] == '%')
		    {
			    write_char('%');
		    }
	    }
	    else
		    write_char(format[i]);
	    i++;
    }
    va_end(args);
    return(i - 1);
}



