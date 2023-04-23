#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
  *printf - mimics printf specifiers s,c and %
  *@format: number of arguments
  *Return: the number of characters printed
  */
int _printf(const char *format, ...)
{
	int i = 0;
    char *s, c;
    va_list args;

    va_start(args, format);
    if (format)
    {
        while (format[i])
        {
            switch (format[i])
            {
                case '%':
                    i++;
                    switch (format[i])
                    {
                        case 'c':
                            c = va_arg(args, int);
                            write_char(c);
                            break;
                        case 's':
                            s = va_arg(args, char *);
                            if (s != NULL)
                                print(s);
                            else
                                print("(null)");
                            break;
                        case '%':
                            write_char('%');
                            break;
                        default:
                            break;
                    }
                    break;
                default:
                    write_char(format[i]);
                    break;
            }
            i++;
        }
    }
    va_end(args);

    return i;
}
  

          


