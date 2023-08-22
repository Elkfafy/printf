#include "main.h"

/**
 * int_hex_upper - a function that converts int to hexadecimal uppercase.
 * @n: the integer.
 * Return: void.
 */
void int_hex_upper(int n)
{
  int i = 0, remainder, x;
  char hex[10];
  if ( n == 0)
    _putchar('0');
  return;
  while (n > 0)
    {
      remainder = n % 16;
      if (remainder < 10)
	{
	  hex[i++] = remainder + '0';
	}
      else
	{
	  hex[i++] = remainder + 'A';
	}
      n /= 16;
    }
  for (x = i - 1; x >= 0; i--)
    {
      _putchar(hex[i]);
    }
}
