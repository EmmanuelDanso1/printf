#include "main.h"
/**
* print_address - prints the address representation of the arguments.
* @args: list of arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
*
* Return: the number of chars printed.
*/
int print_address(va_list args, char *buffer, unsigned int buffer_i)
{
char *bin, *hexa, none[] = "(nil)";
int is_negat, isFirst, count, index = 0;
long int digt;
void *address;
address = (va_arg(args, void *));
if (address == NULL)
{
while (none[index])
{
buffer_i = hand_buff(buffer, none[index], buffer_i);
index++;
}
return (5);
}
digt = (intptr_t)address;
is_negat = 0;
if (digt < 0)
{
digt = (digt * -1) - 1;
is_negat = 1;
}
bin = malloc((64 + 1) * sizeof(char));
bin = init_bin(bin, digt, is_negat, 64);
hexa = malloc((16 + 1) * sizeof(char));
hexa = init_hex(hexa, bin, 16, 0);
buffer_i = hand_buff(buffer, '0', buffer_i);
buffer_i = hand_buff(buffer, 'x', buffer_i);
isFirst = index = count = 0;
while (hexa[index])
{
if (hexa[index] != '0' && isFirst == 0)
{
isFirst = 1;
}
if (isFirst == 1)
{
buffer_i = hand_buff(buffer, hexa[index], buffer_i);
count++;
}
index++;
}
free(bin);
free(hexa);
return (count + 2);
}
