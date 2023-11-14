#include "main.h"

/**
 * printf_rot - Handles custom conversion specifiers including 'R'.
 * @args: arguments
 * Return: Number of characters printed
 */
int printf_rot(va_list args)
{
        int i, j, val = 0;
        int k = 0;
        char *str = va_arg(args, char *);
        char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
        char b[] = {"qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};

        if (str == NULL)
                str = "(null)";

        // Check if the custom specifier is 'R'
        if (str[0] == '%' && str[1] == 'R')
        {
                // Move the pointer to the actual string
                str += 2;

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
        }
        else
        {
                // Handle the regular rot13 conversion
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
        }

        return (val);
}
