#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>

	typedef struct format
	{
		char *pr;
		int(*m)();
	}find;
	
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
	int printf_unsigned_int(va_list args_2);
	int printf_octal(va_list args);
	int printf_hex(va_list args);
	int printf_HEX(va_list args);
	int printf_stringx(va_list args);
	int var_HEX(unsigned int dig);
	int printf_p(va_list args);
	int var_hex(unsigned long int dig);
	int string_rev(va_list args);
	int printf_rot(va_list args);

#endif
