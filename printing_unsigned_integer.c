#include "main.h"
/**
* print_unsigned_int - prints unsigned integer represenation
* of the arguments
* @args: arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
* Return: the number of chars printed.
*/
int print_unsigned_int(va_list args, char *buffer, unsigned int buffer_i)
{
unsigned int temp, digt, divisor, index;
digt = va_arg(args, unsigned int);
temp = digt;
divisor = 1;
while (temp > 9)
{
divisor *= 10;
temp /= 10;
}
for (index = 0; divisor > 0; divisor /= 10, index++)
{
buffer_i = hand_buff(buffer, ((digit / divisor) % 10) + '0', buffer_i);	
}
return (index);
}
