#include "main.h"
/**
* print_capital_HEX - prints a hexadecimal number.
* @number: number to print.
* Return: cnt.
*/
int print_capital_HEX(unsigned int number)
{
int *arr;
int j = 0;
int cnt = 0;
unsigned int tempo = number;
while (tempo != 0)
{
tempo /= 16;
cnt++;
}
if (cnt == 0)
{
_putchar(48);
return (1);
}
arr = malloc(cnt * sizeof(int));
if (arr == NULL)
return (-1);
tempo = number;
while (tempo != 0)
{
arr[j] = tempo % 16;
tempo /= 16;
j++;
}
for (j = cnt - 1; j >= 0; j--)
{
if (arr[j] > 9)
_putchar(arr[j] + '7');
else
_putchar(arr[j] + '0');
}
free(arr);
return (cnt);
}
