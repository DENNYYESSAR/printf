#include "main.h"

/**
 * printf_octal - prints an octal
 * @args: arguments
 * Return: octals
 */

int printf_octal(va_list args)
{
	int i, count = 0;
	int *ptr;
	unsigned int dig = va_arg(args, unsigned int);
	unsigned int var = dig;

	while (dig / 8 != 0)
	{
	dig = dig / 8;
	count++;

	}
	count++;
	ptr = malloc(sizeof(int) * count);

	for (i = 0; i < count; i++)
	{
		ptr[i] = var % 8;
		var /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (count);

}
