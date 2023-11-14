#include "main.h"

/**
 * printf_rot - rot13 conversion
 * @args: arguments
 * Return: val
 */

int printf_rot(va_list args)
{
        int i, j, val = 0;
        int k = 0;
        char *str = va_arg(args, char *);
        char a [] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        char b [] = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};

        if (str == NULL)
                str = "(null)";
        for (i = 0; str[i] != '\0'; i++)
        {
                k = 0;
                for (j = 0; a[j] && !k; j++)
                {
                        if (str[i] == a[j])
                        {
                                _putchar(b[j]);
                                val++;
                                k = 1;
                        }
                }
                if (!k)
                {
                        _putchar(str[i]);
                        val++;
                }
        }
        return (val);
}
