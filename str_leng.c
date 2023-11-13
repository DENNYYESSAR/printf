#include "main.h"

/**
 * str_leng - returns the length of a string
 * @str: string whose length is to be found
 * Return: i
 */

int str_leng(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
		return (i);
}
/**
 * const_stringleng - string of a constant
 * @str: length to be found
 * Return: i
 */

int const_stringleng(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
		return (i);
}
