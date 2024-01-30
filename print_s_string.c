#include "main.h"
/**
*print_s_string = prints an occurence of string
*args - arguments
*Return: linear span of the string
*/
int print_s_string(va_list args)
{
int i;
int linear_span;
char *str;
str  = va_arg(args, char *)
if (str == NULL)
{
str = "(null)";
linear_span = _strlen(str);
for(i = 0; i < linear_span; i++)
_putchar(str[i]);
return (linear_span);
else
{
linear_span = _strlen(str);
return (linear_span);
