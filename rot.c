#include "main.h"

/**
 * printf_rot - rot13 conversion
 * @args: arguments
 * Return: val
 */

int printf_rot(va_list args)
{
    int val = 0;
    char *str = va_arg(args, char *);

    if (str == NULL)
        str = "(null)";

    for (int i = 0; str[i] != '\0'; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
        {
            char base = (str[i] >= 'a') ? 'a' : 'A';
            _putchar((char)(((str[i] - base + 13) % 26) + base));
            val++;
        }
        else
        {
            _putchar(str[i]);
            val++;
        }
    }

    return (val);
}
