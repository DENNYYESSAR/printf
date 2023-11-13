#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include<string.h>
#include<unistd.h>

	int _printf(const char *format, ...);
	int _putchar(char c);
	int printf_c(va_list args);
	int printf_s(va_list args);
	int str_leng(char *str);
	int const_stringleng(const char *str);
	int printf_percent(void);
	int printf_d(va_list args_2);
	int printf_int(va_list args_2);
	int print_binary(va_list args);

#endif
