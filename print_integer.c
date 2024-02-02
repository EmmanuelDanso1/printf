#include "main.h"
/**
* print_int - prints integer
* @args: argument to print
* Return: integer
*/
int print_int(va_list args)
{
int m = va_arg(args, int);
int num, end = m % 10, digt, exp = 1;
int  j = 1;
m = m / 10;
num = m;
if (end < 0)
{
_putchar('-');
num = -num;
m = -m;
end = -m;
j++;
}
if (num > 0)
{
while (num / 10 != 0)
{
exp = exp * 10;
num = num / 10;
}
num = m;
while (exp > 0)
{
digt = num / exp;
_putchar(digt + 48);
num = num - (digt * exp);
exp = exp / 10;	
j++;
}
}
_putchar(end + 48);
return (j);
}
