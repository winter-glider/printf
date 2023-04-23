#include "main.h"
#include <unistd.h>

/**
  *write_char - writes a char
  *@s: character to be written
  *Return: 1 on success and -1 on error
  */
int write_char(char s)
{
	return (write(1, &s, 1));
}
