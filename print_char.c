#include "main.h"
/**
* print_c - this prints character
* @vals: arguments
* Return: 1
*/
int print_c(va_list vals)
{
char str;
str = va_arg(vals, int);
_putchar(str);
return (1);
}
