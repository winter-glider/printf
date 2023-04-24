#include "main.h"

/**
  *print - prints a string
  *@str: the string to be printed
  *Return: nothing
  */
void print(char *str)
{
	while (*str != '\0')
	{
		write_char(*str);
		str++;
	}

}
