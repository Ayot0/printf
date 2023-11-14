#include "main.h"

/**
 * printf_char - prints a char.
 * @val: arguments.
 * Return: integer
 */
int printf_char(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
