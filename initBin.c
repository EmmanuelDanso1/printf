#include "main.h"
/**
* init_bin - prints binary in decimals.
* @bin: binary pointer.
* @arg: argument.
* @is_negat: number is negative or not.
* @size: binary size.
* Return: the number of char printed.
*/
char *init_bin(char *bin, long int arg, int is_negat, int size)
{
int index;
for (index = 0; index < size; index++)
{
bin[index] = '0';
}
bin[size] = '\0';
for (index = size - 1; arg > 1; index--)
{
if (arg == 2)
{
bin[index] = '0';
}
else
{
bin[index] = (arg % 2) + '0';
}
arg /= 2;
}
if (arg != 0)
{
bin[index] = '1';
}
if (is_negat)
{
for (index = 0; bin[index]; index++)
{
if (bin[index] == '0')
{
bin[index] = '1';
}
else
{
bin[index] = '0';
}
}
}
return (bin);
}

