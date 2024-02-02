#include "main.h"
/**
* print_real_HEX - prints an hexadecimal number.
* @vals: arguments.
* Return: cnt.
*/
int print_real_HEX(va_list vals)
{
int j;
int *arr;
int cnt = 0;
unsigned int num = va_arg(vals, unsigned int);
unsigned int temp = num;
while (num / 16 != 0)
{
num /= 16;
cnt++;
}
cnt++;
arr = malloc(cnt *sizeof(int));
for (j = 0; j < cnt; j++)
{
arr[j] = temp % 16;
temp /= 16;
}
for (j = cnt - 1; j >= 0; j--)
{
if (arr[j] > 9)
arr[j] = arr[j] +7;
_putchar(arr[j] + '0');
}
free(arr);
return (cnt);
}
