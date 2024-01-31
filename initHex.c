#include "main.h"
/**
* init_hex - this prints c.
* @hexa: hexadecimals.
* @bin: binaries.
* @size: hex size.
* @uppercase: integer to determine if the hex is lowercase or uppercase.
*
* Return: array of binaries.
*/
char *init_hex(char *hexa, char *bin, int size, int uppercase)
{
int index = (size * 4) - 1;
int k, converter, num;
hexa[size] = '\0';
if (uppercase == 1)
converter = 55;
else
converter = 87;
while (index >= 0)
{
num = 0;
for (k = 1; k <= 8; k *= 2, index--)
{
num = ((bin[index] - '0') * k) + num;
}
index++;
if (num <= 9)
{
hexa[index / 4] = num + 48;
}
else
{
hexa[index / 4] = num + converter;
}
}
return (hexa);
}
