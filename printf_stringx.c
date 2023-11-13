#include "main.h"

/**
 * printf_stringx - prints a hexidecimal
 * @args: arguments
 * Return: 1
 */

int printf_stringx(va_list args)
{
	char *str;
	int i, length = 0;
	int count;

	str = va_arg(args, char*);
	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			count = str[i];
			if (count < 16 && count >= 0)
			{
				_putchar('0');
				length++;
			}
			length = length + var_HEX(count);
		}
		else
		{
			_putchar(str[i]);
			length++;
		}
	}
	return (length);
}
