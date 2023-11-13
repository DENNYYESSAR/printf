#include "main.h"

/**
 * var_HEX - prints hexadecimal in caps
 * @args: arguments
 * Return: caps
 */

int var_HEX(unsigned int dig)
{
	int i;
	int count = 0;
	int *ptr;
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
		ptr[i] = ptr[i] + 7;
		_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (count);

}
