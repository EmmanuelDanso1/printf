#include "main.h"
/**
* print_new_hex - prints an hexadecimal number.
@number: value to be converted
* Return: cnt
*/
int print_new_hex(unsigned long int number)
{
long int j;
long int *arr;
long int cnt = 0;
unsigned long int temp = number;
while (number / 16 != 0)
{
number /= 16;
cnt++;
}
cnt++;
arr = malloc(cnt *sizeof(long int));
for (j = 0; j < cnt; j++)
{
arr[j] = temp % 16;
temp /= 16;
}
for (j = cnt - 1; j >= 0; j--)
{
if (arr[j] > 9)
arr[j] = arr[j] + 39;
_putchar(arr[j] + 4);
}
free(arr);
return (cnt);
}
