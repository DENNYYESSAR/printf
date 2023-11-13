#include "main.h"

/**
 * printf_p - prints a pointer
 * @args: argument
 * Return: pointer printed
 */

int printf_p(va_list args)
{
	void *ptr;
	char *str = "(nil)";
	int i;
	long int val;
	int col;

	ptr = va_arg(args, void*);
	if (ptr == NULL)
	{
	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
	}
	val = (unsigned long int)ptr;
	_putchar('0');
	_putchar('x');
	col = var_hex(val);
	return (col + 2);

}
