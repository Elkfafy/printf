#include "main.h"

/**
 * print_hexa_lower - a function that converts int to hexadecimal in lowercase.
 * @n: the integer
 * Return: void.
 */
int print_hexa_lower(int n)
{
int i = 0, x;
unsigned int remainder;
char hex[10];
if (n == 0)
_putchar ('0');
return (0);
while (n > 0)
{
remainder = n % 16;
if (remainder < 10)
{
hex[i++] = remainder + '0';
}
else
{
hex[i++] = remainder - 10 + 'a';
}
n /= 16;
}
for (x = i - 1; x >= 0; x--)
{
_putchar(hex[x]);
}
return (i);
}
