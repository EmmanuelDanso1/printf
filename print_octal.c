#include "main.h"
/**
* print_octal - prints an octal number.
* @vals: arguments.
* Return: cnt.
*/
int print_octal(va_list vals)
{
int j;
int *arr;
int cnt = 0;
unsigned int number = va_arg(vals, unsigned int);
unsigned int temp = number;
while (number / 8 != 0)
{
number /= 8;
cnt++;
}
cnt++;
arr = malloc(cnt *sizeof(int));
for (j = 0; j < cnt; j++)
{
arr[j] = temp % 8;
temp /= 8;
}
for (j = cnt - 1; j >= 0; j--)
{
_putchar(arr[j] + 48);
}
free(arr);
return (cnt);
}
