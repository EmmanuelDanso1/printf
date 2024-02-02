#include "main.h"
/**
* print_binary - prints a binary number.
* @vals: arguments.
* Return: integer
*/
int print_binary(va_list vals)
{
int banner = 0;
int cnt = 0;
int j, c = 1, b;
unsigned int number = va_arg(vals, unsigned int);
unsigned int k;
for (j = 0; j < 32; j++)
{
k = ((c << (31 - j)) & number);
if (k >> (31 - j))
banner = 1;
if (banner)
{
b = k >> (31 - j);
_putchar(b + 48);
cnt++;
}
}
if (cnt == 0)
{
cnt++;
_putchar(48);
}
return (cnt);
}
