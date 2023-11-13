#include "main.h"

/**
 * printf_c - prints a char
 * @args: arguments
 * Return: 1
 */

int printf_c(va_list args)
{
	char strng;

	strng = va_arg(args, int);
	_putchar(strng);
	return (1);

}
