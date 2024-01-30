#include "main.h"
/**
* print_c_char - prints a c character.
* @args: arguments.
* Return: integer.
*/
int print_c_char(va_list args)
{
char c;
i = va_arg(args, int);
_putchar(i);
return (1);
}
