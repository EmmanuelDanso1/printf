#include "main.h"
/**
* print_small_hex - prints an hexadecimal number.
* @vals: arguments.
* Return: counter.
*/
int print_small_hex(va_list vals)
{
int j;
int *arr;
int cnt = 0;
unsigned int number = va_arg(vals, unsigned int);
unsigned int temp = number;
while (number / 16 != 0)
{
number /= 16;
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
arr[j] = arr[j] + 39;
_putchar(arr[j] + 48);
}
free(arr);
return (cnt);
}
