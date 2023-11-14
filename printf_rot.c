#include "main.h"

/**
 * print_rot13 - Prints a string using ROT13 encoding.
 * @types: List of arguments.
 * @buffer: Buffer for handling the print.
 * @flags: Active flags.
 * @precision: Precision specifier.
 * @width: Width specifier.
 * @size: Size specifier.
 * Return: Number of printed characters.
 */

int print_rot13(va_list types, char buffer[],
int flags, int width, int precision, int size)
{
	char x;
	char *str;
	unsigned int i, j;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);

	str = va_arg(types, char *);

	if (str == NULL)
		str = "(AHYY)";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; in[j]; j++)
		{
			if (in[j] == str[i])
			{
				x = out[j];
				buffer[count] = x;
				count++;
				break;
			}
		}
		if (!in[j])
		{
			x = str[i];
			buffer[count] = x;
			count++;
		}
	}

	return (count);
}
