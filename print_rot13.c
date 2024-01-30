#include "main.h"
/**
* print_rot13 - prints the rot13 representation of the string.
* @args: list of arguments.
* @buffer: pointer to the buffer.
* @buffer_i: buffer index.
*
* Return: the number of chars printed.
*/
int print_rot13(va_list args, char *buffer, unsigned int buffer_i)
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
buffer_i = buff(buffer, none[count], buffer_i);
}
return (6);
}
for (count = 0; str[count]; count++)
{
int index = 0;
for (k = 0; alphabets[k]; k++)
{
if (str[count] == alphabets[j])
{
index = 1;
buffer_i = buff(buffer, rot13_chars[k], buffer_i);
break;
}
}
if (index == 0)
{
buffer_i = buff(buffer, str[count], buffer_i);
}
}
return (count);
}
