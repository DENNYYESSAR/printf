#include "main.h"

/**
 * print_binary - converts int to bi
 * @args: arguments
 * Return: the binary number
 */

int print_binary(va_list args)
{
	int lag = 0;
	int digt = 0;
	unsigned int j;
	int i, a = 1, k;
	unsigned int fig = va_arg(args, unsigned int);

	for (i = 0; i < 32; i++)
	{
		j = ((a << (32 - i)) & fig);
		if (j >> (31 - i))
			lag = 1;
		if (lag)
		{
			k = j >> (31 - i);
			_putchar(k + 48);
			digt++;
		}
	}
	if (digt == 0)
	{
		digt++;
		_putchar('0');
	}
	return (digt);

}
