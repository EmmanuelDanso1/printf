#include "main.h"
/**
*init_bin - prints binary in decimals.
*@bin: binary pointer.
*@arg: argument.
*@isNegat: number is negative or not.
*@size: binary size.
*Return: the number of char printed.
*/
char *init_bin(char *bin, long int arg, int isNegat, int size)
{
int i = 0;
while (i < size)
{
bin[i] = '0';
i;
}
bin[size] = '\0';
i = size - 1;
while (arg > 1)
{
if (arg == 2)
bin[i] = '0';
else
bin[i] = (arg % 2) + '0';
arg /= 2;
i--;
}
if (arg != 0)
bin[i] = '1';
if (isNegat)
{
i = 0;
while (bin[i])
{
if (bin[i] == '0')
bin[i] = '1';
else
bin[i] = '0';
i++;
}
}
return (bin);
}
