#include "main.h"
/**
* print_reverse - function that prints a str in reverse
* @args: type struct va_arg where is allocated printf arguments
*
* Return: the string
*/
int print_reverse(va_list args)
{
char *s = va_arg(args, char*);
int j;
int k = 0;
if (s == NULL)
s = "(null)";
while (s[k] != '\0')
k++;
for (j = k - 1; j >= 0; j--)
_putchar(s[j]);
return (k);
}
