#include "main.h"

/**
 * get_flags - Calculate active flags based on the format string
 * @format: The formatted string containing the conversion specifier
 * @i: Pointer to the current position in the format string
 *
 * Return: Active flags determined from the format string
 */
int get_flags(const char *format, int *i)
{
	int j, curr_i;
	int flags = 0;

	const char FLAGS_CH[] = {'+', ' ', '#', '-', '\0'};
	const int FLAGS_ARR[] = {F_PLUS, F_SPACE, F_HASH, F_MINUS, 0};

	for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
	{
		for (j = 0; FLAGS_CH[j] != '\0'; j++)
		{
			if (format[curr_i] == FLAGS_CH[j])
			{
				flags |= FLAGS_ARR[j];
				break;
			}
		}

		if (FLAGS_CH[j] == 0)
			break;
	}

	*i = curr_i - 1;

	return (flags);
}
