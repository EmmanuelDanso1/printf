#include "main.h"
/**
* print_ascii_string - print ascii string.
* @vals: parameter.
* Return: integer.
*/
int print_ascii_string(va_list vals)
{
char *s;
int j, len = 0;
int digt;
s = va_arg(vals, char *);
if (s == NULL)
s = "(null)";
j = 0;
while (s[j] != '\0')
{
if (s[j] < 32 || s[j] >= 127)
{
_putchar('\\');
_putchar('x');
len = len + 2;
digt = s[j];
if (digt < 16)
{
_putchar('0');
len++;
}
len += print_capital_HEX(digt);
}
else
{
_putchar(s[j]);
len++;
}
j++;
}
return (len);
}
