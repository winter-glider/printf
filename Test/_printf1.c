#include <stdio.h>
#include <stdarg.h>
/**
 * _printf1 - print_integer

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;
	char c;

	va_start(args, format);

	while ((c = *format++) != '\0')
	{
	if (c == '%')
	{
	switch (*format++)
	{
	case 'd':
	case 'i':
	count += printf("%d", va_arg(args, int));
	break;
	case '%':
	putchar('%');
	count++;
	break;
	default:
	}
	}
	else
	{
	putchar(c);
	count++;
	}
	}

	va_end(args);

	return (count);
}
