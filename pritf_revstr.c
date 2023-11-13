#include "main.h"

/**
 * string_rev - prints a string reverse
 * @args: argument
 * Return: string
 */

int string_rev(va_list args)
{
	char *str = va_arg(args, char *);
	int i;
	int j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(str[i]);
	return (j);

}
