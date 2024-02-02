#include "main.h"
/**
* _printf - is a function that selects the correct function to print.
* @format: identifier to look for.
* Return: the length of the string.
*/
int _printf(const char * const format, ...)
{
match mt[] = {
{"%s", print_s}, {"%c", print_c},
{"%%", print_percent},
{"%i", print_int}, {"%d", print_deci}, {"%r", print_reverse},
{"%R", print_r_rot13}, {"%b", print_binary},
{"%u", print_unsigned_int},
{"%o", print_octal}, {"%x", print_small_hex}, {"%X", print_real_HEX},
{"%S", print_ascii_string}, {"%p", print_p_pointer}
};
va_list args;
int j = 0, k, len = 0;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
Here:
while (format[j] != '\0')
{
k = 13;
while (k >= 0)
{
if (mt[k].ps[0] == format[j] && mt[k].ps[1] == format[j + 1])
{
len += mt[k].fn(args);
j = j + 2;
goto Here;
}
k--;
}
_putchar(format[j]);
len++;
j++;
}
va_end(args);
return (len);
}
