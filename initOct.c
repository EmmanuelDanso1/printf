#include "main.h"
/**
* init_oct - prints c.
* @oct: octals.
* @binary: binaries.
*
* Return: array of binaries.
*/
char *init_oct(char *oct, char *binary)
{
int index = 31;
int k, oct_i = 10, size, num;
oct[11] = '\0';
while (index >= 0)
{
if (index > 1)
{
size = 4;
}
else
{
size = 2;
}
num = 0;
for (k = 1; k <= size; k *= 2, index--)
{
num = ((binary[index] - '0') * k) + num;
}
index++;
oct[oct_i] = num + '0';
oct_i--;
}
return (oct);
}
