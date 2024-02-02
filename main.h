#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
/**
*struct dictionary: - converter for printf
* @ps: type char pointer of the specifier
* @fn: function for the conversion specifier
*/
typedef struct dictionary
{
char *ps;
int (*fn)();
} match;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list vals);
int print_s(va_list vals);
int _strlen(char *str);
int _strlength(const char *str);
int print_percent(void);
int print_int(va_list args);
int print_deci(va_list args);
int print_binary(va_list vals);
int print_unsigned_int(va_list args);
int print_octal(va_list vals);
int print_small_hex(va_list vals);
int print_capital_HEX(unsigned int number);
int print_real_HEX(va_list vals);
int print_ascii_string(va_list vals);
int print_p_pointer(va_list vals);
int print_new_hex(unsigned long int number);
int print_reverse(va_list args);
int print_r_rot13(va_list args);
#endif
