#include "main.h"
/**
* print_r_rot13 - convert to rot13
* @args: printf arguments
* Return: counter
*/
int print_r_rot13(va_list args)
{
int j, k, cnt = 0;
int l = 0;
char *s = va_arg(args, char*);
char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};
if (s == NULL)
s = "(null)";
for (j = 0; s[j]; j++)
{
l = 0;
for (k = 0; al[k] && !l; k++)
{
if (s[j] == al[k])
{
_putchar(bl[k]);
cnt++;
l = 1;
}
}
if (!l)
{
_putchar(s[j]);
cnt++;
}
}
return (cnt);
}
