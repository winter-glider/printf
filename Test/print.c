#include "main.h"

/**
  *print - prints a string
  *@str: the string to be printed
  *Return: nothing
  */
int print(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		i += write_char(*str);
		str++;
	}

	return (i);

}
