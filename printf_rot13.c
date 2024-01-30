#include "main.h"
/**
* print_rot13 - prints the rot13 representation of the string.
* @args: arguments.
* @buffer: pointer to the buffer.
* @buf_i: buffer index.
*
* Return: the number of chars printed.
*/
int print_rot13(va_list args, char *buffer, unsigned int buf_i)
{
char *str, none[] = "(nill)";
char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char rot13_chars[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
unsigned int count, k;
str = va_arg(args, char *);
if (str == NULL)
{
for (count = 0; str[count]; count++)
{
buf_i = hand_buff(buffer, none[count], buf_i);
}
return (6);
}
for (count = 0; str[count]; count++)
{
int index = 0;
for (k = 0; alphabets[k]; k++)
{
if (str[count] == alphabets[k])
{
index = 1;
buf_i = hand_buff(buffer, rot13_chars[k], buf_i);
break;
}
}
if (index == 0)
{
buf_i = hand_buff(buffer, str[count], buf_i);
}
}
return (count);
}

