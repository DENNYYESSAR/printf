#include "main.h"

/**
 * _printf - printf clone
 * @format: character string
 * Return: integer
 */

int _printf(const char *format, ...)
{
	find f[] = {
		{"%c", printf_c}, {"%s", printf_s}, {"%%", printf_percent}, {"%i", printf_int}, {"%d", printf_d}, {"%R", printf_rot}, {"%b", print_binary}, {"%o", printf_octal}, {"%u", printf_unsigned_int}, {"%x", printf_hex}, {"%X", printf_HEX}, {"%S", printf_stringx}, {"%p", printf_p}, {"%r", string_rev}
	};

	va_list args_2;
	int i = 0, length = 0;
	int j;

	va_start(args_2, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Up:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (f[j].pr[0] == format[i] && f[j].pr[1] == format[i + 1])
			{
				length = length + f[j].m(args_2);
				i = i + 2;
				goto Up;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args_2);
	return (length);

}
