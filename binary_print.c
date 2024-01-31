#include "main.h"

/**
* print_binary - prints the binary representation of the arguments.
* @args: list of arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
*
* Return: number of chars printed.
*/
int print_binary(va_list args, char *buffer, unsigned int buffer_i)
{
char *b;
int digt, count, index, isFirst, is_negat;
digt = va_arg(args, int);
is_negat = 0;
if (digt == 0)
{
buffer_i = hand_buff(buffer, '0', buffer_i);
return (1);
}
if (digt < 0)
{
digt = (digt * -1) - 1;
is_negat = 1;
}
b = malloc((32 + 1) * sizeof(char));
b = init_bin(b, digt, is_negat, 32);
isFirst = index = count = 0;
while (b[index])
{
if (isFirst == 0 && b[index] == '1')
{
isFirst = 1;
}
if (isFirst == 1)
{
buffer_i = hand_buff(buffer, b[index], buffer_i);
count++;
}
index++;
}
free(b);
return (count);
}
