#include "main.h"
/**
 * printf_s - prints a string
 * @args: arguments
 * Return: the string length
 */

int printf_s(va_list args)
{
	char *str;
	int i;
	int leng;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		leng = str_leng(str);
		for (i = 0; i < leng; i++)
			_putchar(str[i]);
		return (leng);
	}
	else
	{
		leng = str_leng(str);
		for (i = 0; i < leng; i++)
			_putchar(str[i]);
		return (leng);
	}
}
