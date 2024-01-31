#include "main.h"
/**
* print_char - print the occurance of a char.
* @args: arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
*
* Return: 1 on success.
*/
int print_char(va_list args, char *buffer, unsigned int buffer_i)
{
char k;
k = va_arg(args, int);
hand_buff(buffer, k, buffer_i);
return (1);
}
