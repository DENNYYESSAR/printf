#include "main.h"

/**
 * printf_hex - prints an octal
 * @args: arguments
 * Return: hexadecimals
 */

int printf_hex(va_list args)
{
	int i, count = 0;
	int *ptr;
	unsigned int dig = va_arg(args, unsigned int);
	unsigned int var = dig;

	while (dig / 16 != 0)
	{
	dig = dig / 16;
	count++;

	}
	count++;
	ptr = malloc(sizeof(unsigned int) * count);

	for (i = 0; i < count; i++)
	{
		ptr[i] = var % 16;
		var = var / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (ptr[i] > 9)
			ptr[i] = ptr[i] + 39;
		_putchar(ptr[i] + '0');
	}
		free(ptr);
		return (count);

}
