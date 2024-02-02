#include "main.h"
/**
* print_unsigned_int - this prints integer
* @args: argument to print
* Return: integer
*/
int print_unsigned_int(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
int num, end = n % 10, digt, expo = 1;
int j = 1;
n = n / 10;
num = n;
if (end < 0)
{
_putchar('-');
num = -num;
j = -j;
end = -end;
j++;
}
if (num > 0)
{
while (num / 10 != 0)
{
expo = expo * 10;
num = num / 10;
}
num = n;
while (expo > 0)
{
digt = num / expo;
_putchar(digt + 48);
num = num - (digt *expo);
expo = expo / 10;
j++;
}
}
_putchar(end + '0');
return (j);
}
