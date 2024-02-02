#include "main.h"
/**
* print_s - prints a string
*@vals:argument
*Return: len of the string
*/
int print_s(va_list vals)
{
char *str;
int j, len;
str = va_arg(vals, char *);
if (str == NULL)
{
str = "(null)";
len = _strlen(str);
for (j = 0; j < len; j++)
;
_putchar(str[j]);
return (len);
}
else
{
len = _strlen(str);
for (j = 0; j < len; j++)
;
_putchar(str[j]);
return (len);
}
}
