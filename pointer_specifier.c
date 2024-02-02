#include "main.h"
/**
* print_p_pointer - prints an hexadecimal number.
* @vals arguments.
* Return: counter.
*/
int print_p_pointer(va_list vals)
{
void *p;
char *c = "(nil)";
long int j;
int v;
int k;
p = va_arg(vals, void*);
if (p == NULL)
{
for (k = 0; c[k] != '\0'; k++)
{
_putchar(c[k]);
}
return (k);
}
j = (unsigned long int)p;
_putchar('0');
_putchar('x');
v = print_new_hex(j);
return (v + 2);
}
