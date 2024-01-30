#include "main.h"
/**
* handle_buff - concats the buffer characters.
* @buffer: pointer to the buffer.
* @c: character to concatenate.
* @buffer_i: index of the pointer to the buffer.
*
* Return: index of the pointer to the buffer.
*/
unsigned int handle_buff(char *buffer, char c, unsigned int buffer_i)
{
if (buffer_i == BUFF_SIZE)
{
display_buffer(buffer, buffer_i);
buffer_i = 0;
}
buffer[buffer_i] = c;
buffer_i++;
return (buffer_i);
}
