#include "main.h"

/**
 * string_rot13 - applies ROT13 encryption to a string and prints it
 * @args: argument
 * Return: number of characters printed
 */
int string_rot13(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (*str != '\0')
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
		{

		char base = (*str >= 'a') ? 'a' : 'A';

		_putchar(((*str - base + 13) % 26) + base);
		count++;
		}
		else
		{
			_putchar(*str);
			count++;
		}
		str++;
	}

	return (count);
}
