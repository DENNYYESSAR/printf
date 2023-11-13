#include "main.h"

/**
 * var_hex - hexadecimals
 * @dig: argument
 * Return: number of hexadecimals
 */

int var_hex(unsigned long int dig)
{
	long int i;
	long int count = 0;
	long int *ptr;
	unsigned long int var = dig;

	while (dig / 16 != 0)
	{
	var = var / 16;
	count++;

	}
	count++;
	ptr = malloc(sizeof(long int) * count);

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
