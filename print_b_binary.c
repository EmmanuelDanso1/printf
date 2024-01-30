#include "main.h"
/**
* print_b_binary - prints the binary
*representation of the arguments.
* @args: list of arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
*
* Return: number of chars to be printed.
*/
int print_b_binary(va_list args, char *buffer, unsigned int buffer_i)
{
char *b;
int digt, count;
int i, isFirst, isNegat;
digt = va_arg(args, int);
isNegat = 0;
if (digt == 0)
{
buffer_i = buff(buffer, '0', buffer_i);
return (1);
}
if (digt < 0)
{
digt = (digt * -1) - 1;
isNegat = 1;
}
b = malloc((32 + 1) * sizeof(char));
b = init_bin(b, digt, isNegat, 32);
isFirst = 0;
i = 0;
while (b[i])
{
if (isFirst == 0 && b[i] == '1')
isFirst = 1;
if (isFirst == 1)
{
buffer_i = buff(buffer, b[i], buffer_i);
count++;
}
i++;
}
free(b);
return (count);
}
